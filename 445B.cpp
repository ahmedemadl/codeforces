    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-08-23 16:29:08
    // Description : Junior Training Sheet V7.0
    // Problem Code: 445B
    // Problem Name: B_DZY_Loves_Chemistry
    // Learned     : DFS , Graphs
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    // A function to perform Depth First Search (DFS) on the graph
    void DFS(int node, const vector<vector<int>>& adj, vector<bool>& visited, int& component_size) {
        // Mark the current node as visited
        visited[node] = true;
        
        // Increment the size of the current component
        component_size++;
     
        // Visit all the neighbors of the current node
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                DFS(neighbor, adj, visited, component_size);
            }
        }
    }
     
    int main() {
        int n, m; // n is the number of nodes, m is the number of relations (edges)
        
        // Take input for the number of nodes and edges
        cin >> n >> m;
     
        // Adjacency list to store the graph
        vector<vector<int>> adj(n + 1); // Nodes are considered 1-indexed
     
        // Read the edges (relations) between nodes
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v); // Adding an edge from u to v
            adj[v].push_back(u); // Since the graph is undirected, add an edge from v to u as well
        }
     
        // Vector to keep track of visited nodes
        vector<bool> visited(n + 1, false);
         long long total_sum_of_components = 0; // To store the sum of all connected component sizes
        int max_component_size = 0; // To store the size of the largest connected component
     
        // Loop through all nodes to find the largest connected component
        for (int i = 1; i <= n; i++) {
            if (!visited[i]) { // If node i is not visited, we start a new DFS
                int component_size = 0; // Size of the current component
                DFS(i, adj, visited, component_size); // Perform DFS from node i
                 total_sum_of_components += component_size-1; // Add the size of this component to the total sum
            }
        }
     
        // the size of the largest connected component
        long long result = pow(2,(total_sum_of_components)) ;
        cout << result ;
     
        return 0;
    }

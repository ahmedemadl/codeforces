    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-07-16 13:33:35
    // Description : Junior Training Sheet V7.0
    // Problem Code: 129B
    // Problem Name: B_Students_and_Shoelaces
    // Learned     : a lot :) 
    //=====================================================
        #include <bits/stdc++.h>
        using namespace std;
         
        int main() {
            int n, m, count = 0;
            cin >> n >> m;
            vector<int> kicked;
            vector<vector<int>> adjList(n + 1);
            while (m--) {
                int a, b;
                cin >> a >> b;
                adjList[a].push_back(b);
                adjList[b].push_back(a);
            }
            auto removeNode = [&](int node) {
                adjList[node].clear();
                for (int i = 1; i <= n; ++i) {
                    adjList[i].erase(remove(adjList[i].begin(), adjList[i].end(), node), adjList[i].end()); // Remove 'node' from other nodes' connections
                }
            };
         
            while (true) {
                kicked.clear();
                for (int i = 1; i <= n; ++i) {
                    if (!adjList[i].empty() && adjList[i].size() < 2) {
                        kicked.push_back(i);
                    }
                }
         
                if (kicked.empty()) {
                    cout << count << endl;
                    return 0;
                }
                for (int i = 0; i < kicked.size(); ++i) {
                    removeNode(kicked[i]);
                }
                count++;
            }
         
            return 0;
        }


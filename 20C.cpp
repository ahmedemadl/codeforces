//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-05-30 22:10:23
// Problem Name: C_Dijkstra
// Note        :
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 +1;
int n, m;
vector<pair<ll,ll>> adj[N];

void dijkstra(int start){
    vector<ll> cost(n +1, 1e18), parent(n + 1, -1);
    vector<bool> vis(n + 1);
    priority_queue< pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>> > q;
    q.push({0, start});
    cost[start] = 0;
    bool found = 0;
    while(!q.empty()){
        int node = q.top().second;
        q.pop();
        if(node == n) found =1;
        if(vis[node])continue;
        vis[node] = 1;
        for(auto child : adj[node]){
            if(cost[child.first] > cost[node] + child.second){
                cost[child.first] = cost[node] + child.second;    
                parent[child.first] = node;
                
                q.push({ cost[child.first] , child.first });
            }
        }
    }
    // cout << cost[n];
    // finding path
    if(cost[n] == 1e18){
        cout << -1;
        return ;
    }
    deque<ll> d;
    while(n != -1){
        d.push_front(n);
        n = parent[n];
    }
    for(auto it : d) cout << it << " ";
}

int main(){
    cin >> n >> m;
    for(int i = 0 ; i < m; i++){
        // two nodes and wight
        ll a, b, c; cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }
    dijkstra(1);
    
    return 0;
}

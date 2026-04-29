//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-04-29 12:11:43
// Problem Name: E_Round_Dance
// Note        : يا الله يا ولي النعم 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2 * 1e5 +1;
vector<int> adj[N];
bool vis[N];

pair<int, bool> dfs(int node,int parent,pair<int,bool> length){
    vis[node]= 1;
    // cout << node <<" ";
    for(int child : adj[node]){
        if(!vis[child]){
            pair<int, bool> rec = dfs(child, node, length);
            length.first += rec.first;
            length.second = rec.second;
        }else if(child != parent){
            length.second =1; // cycle
        }
    }
    length.first++;
    return length;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        map<int,set<int>> st;
        for(int i = 1 ;i <= n;i++){
            int a; cin >> a;
            if(!st[i].count(a))
            adj[i].push_back(a);
            if(!st[a].count(i))
            adj[a].push_back(i);
            st[i].insert(a);
            st[a].insert(i);
        }
        // for(int i =1;i <= n; i++){
        //     cout << i << " ";
        //     for(int x : adj[i]) cout << x << " ";
        //     cout << '\n';
        // }
        int c_l = 0; // complete cycle component
        int result = 0;
        for(int i = 1; i <= n; i++){
            if(!vis[i]){
                pair<int, bool> send {0, 0};
                pair<int, bool> ans = dfs(i, -1, send);
                // return 0;
                // cout << i << " " << ans.first << " " << ans.second << '\n';
                if(ans.second == 1){
                    c_l++;
                }else{
                    result++;
                }
            }
        }

        cout << c_l + (result ? 1 : 0) << " " << c_l + result <<'\n';

        // clear
        for(int i = 1; i <= n; i++){
            adj[i].clear();
            vis[i] = 0;
        }
    }
    return 0;
}

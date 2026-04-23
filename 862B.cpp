//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-04-23 15:05:09
// Problem Name: B_Mahmoud_and_Ehab_and_the_bipartiteness
// Note        : black box style because I just pasted from the temp hahah
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 1;
vector<int> adj[N];
int vis[N];
int color[N];

bool dfs(int node, int col){
    color[node] = col;
    for(int x : adj[node]){
        if(color[x] == 0){
            bool ans = dfs(x, 3 - col);
            if(!ans) return false;
        }else if(col == color[x]){
            return false;
        }
    }
    return true;
}


int main(){
    cin.tie(0)->sync_with_stdio(0);
        ll n;cin >> n;
        
        for(ll i = 1; i <= n -1; i++){
            int a,b; cin >> a>> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        // from two teams and t1, t2
        // cout << t1*t2 - count;
        // the idea is to count all possible and subtract from exiting ones
        
    bool ans = 1;
    for(int i = 0; i < n; i++){
        if(color[i] == 0){
            ans = dfs(i, 1);
            if(ans == 0)break;
        }else{

        }
    }
    ll t1=0, t2= 0;
    for(int i = 1 ;i <= n;i++){
        if(color[i]== 1){
            t1++;
        }else if(color[i] == 2){
            t2++;
        }
    }
    cout << t1*t2 - (n-1) << '\n';
    return 0;
}

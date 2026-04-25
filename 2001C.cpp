//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-04-24 07:18:19
// Problem Name: C_Guess_The_Tree
// Note        : there is a chance it will work
// small mistake, you had to cout.flush after output
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 10001;
set<int> adj[N];
int vis[N];

void dfs(int node){
    vis[node] =1;
    for(int child : adj[node]){
        if(!vis[child]){
            cout << node << " " << child << " ";
            dfs(child);
        }
    }
}

int ask(int a,int b){
    cout << "? " << a << " " << b << "\n\n";
    cout.flush();
    int res; cin >> res;
    return res;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;

        for(int i = 2 ;i <= n; i++){
            int a = 1;
            int ans = ask(a, i);
            if(ans == a){
                adj[a].insert(i);
                adj[i].insert(a);
            }else{
                while(ans != a){
                    a = ans;
                    ans = ask(a, i);
                }
                adj[a].insert(i);
                adj[i].insert(a);
            }
        }
            cout  << "! ";
            dfs(1);
            cout << "\n\n";
            cout.flush();

            // clear
            for(int i =1; i <= n ;i++){
                adj[i].clear();
                vis[i]= 0;
            } 

    }
    return 0;
}
/*
so you want to dfs the tree right ? 
set to remove duplicates cause of the algorithm

*/

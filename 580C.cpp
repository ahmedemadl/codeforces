//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-04-21 02:26:04
// Problem Name: C_Kefa_and_Park
// Note        : let's goooooooooooooooooooooooooooooo
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 1;
vector<int> adj[N];
int cat[N];
int vis[N];
int ans;
int m;
void dfs(int node,int parent, int state){
    vis[node] = 1;
    if(cat[node])state++;
    else state=0;
    if(state > m) return ;
    if(adj[node].size() == 1 && adj[node][0] == parent){
        ans++;
        return ;
    }
    
    for(int child : adj[node]){
        if(!vis[child]){
            dfs(child, node, state);
        }
    }
}

int main(){
    int n;cin >> n >> m;
    
    for(int i = 1 ;i <= n;i++){
        cin >> cat[i];
    }
    for(int i = 0 ;i < n-1 ;i ++){
        int a, b;cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    dfs(1, 1, 0);
    // the dfs is going to see 
    // if we reach the end of the leaf and there is not more than m cat
    // when we reach the end of a leaf ?
    // return flase if there is m cat?
    // I want to go into all leafs?
    // the root is 1
    cout << ans;
    // well if it works, I'm happy
    return 0;
}
/*
i want to determine if i'm in an end of a leaf
how to do so?
I have an idea
if there is only one relation and this relation is with the parent
It is the end of the leaf
there if and return true
*/

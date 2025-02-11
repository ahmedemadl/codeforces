#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, s, t, ans = 0;
    cin >> n >> s >> t;
    
    if(s == t){
        cout << 0 << endl;
        return 0;
    }
    
    vector<int> p(n);
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    
    vector<bool> visited(n, false);
    int current = s;
    
    while(true){
        
        if(current == t){
            cout << ans << endl;
            return 0;
        }
        
        
        if(visited[current - 1]){
            cout << -1 << endl;
            return 0;
        }
        
        
        visited[current - 1] = true;
        
        
        current = p[current - 1];
        ans++;
    }

    return 0;
}

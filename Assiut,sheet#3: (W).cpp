    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-02 22:37:35
    // Problem Name: W_Mirror_Array
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n,m;cin>>n>>m;
        int x[n][m];
        for(int i = 0 ; i < n; i++){
            for(int j = 0 ; j < m ; j++){
                cin >> x[i][j]; 
            }
        }
        for(int i = 0 ; i < n; i++){
            for(int j = m-1 ; j >= 0 ; j--){
                cout << x[i][j] << " "; 
            }
            cout << '\n';
        }
     
        return 0;
    }

    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-08-24 06:13:45
    // Description : Junior Training Sheet V7.0
    // Problem Name: X_The_maximum_path_sum
    // Learned     : مش فاهم انا بعمل ايه
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    int n, m; 
    int arr[11][11];
    ll maxi;
    ll recursion(ll sum ,int i ,int j){
        if(i == n -1 && j == m - 1) return arr[i][j];
        else if(i == n || j == m){
            return -10000000;
        }
     
        return arr[i][j] + max(recursion(sum + arr[i][j], i + 1, j), recursion(sum + arr[i][j], i, j+1));
     
    }
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        cin >> n >> m;
        for(int i = 0; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                cin >> arr[i][j];
            }
        }
     
        cout << recursion(0, 0 , 0);
     
        return 0;
    }

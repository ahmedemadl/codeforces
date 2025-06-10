    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-10 19:12:24
    // Problem Name: F_Multiplication_of_Matrices
    // Learned     : How to Multiply two matrices
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int m,n;cin >> m >> n;
        int arr1[m][n];
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                cin >> arr1[i][j];
            }
        }
        int n1,p; cin >> n1 >> p;
        int arr2[n1][p];
        for(int i = 0 ; i < n1 ; i++){
            for(int j = 0 ; j < p ; j++){
                cin >> arr2[i][j];
            }
        }
        int mul[m][p];
     
        for(int i = 0 ; i < m ; i++){ // arr1 row fixed && arr2 colum fixed
            for(int j = 0 ; j < p ; j++){
                int count = 0;
                for(int o = 0 ; o < n ; o++){
                    count += arr1[i][o] * arr2[o][j]; 
                }
                mul[i][j] = count;
            }
        }
        
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < p ; j++){
                cout << mul[i][j] << " " ;
            }
            cout << '\n';
        }
        
        return 0;
    }

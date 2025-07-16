    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-03 17:39:23
    // Problem Name: X_8_Neighbors
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n,m;cin>>n>>m;
        char a[n+2][m+2];
        // 1 based 2D array
        for(int i = 0; i < n+2 ; i++){
            a[i][0]='x';
            a[i][m+1]='x';
        }
        for(int i = 0; i < m+2 ; i++){
            a[0][i]='x';
            a[n+1][i]= 'x';
        }
     
        for(int i = 1 ; i < n+1; i++){
            for(int j = 1 ; j < m+1 ; j++){
                cin>> a[i][j];
            }
        }
        int x,y;cin >> x >> y;
     
        if('x' != a[x-1][y] || 'x' != a[x+1][y] || 'x' != a[x][y-1] || 'x' != a[x][y+1]){
                    cout << "no";
                    return 0;
        }
        if('x' != a[x-1][y-1] || 'x' != a[x-1][y+1] || 'x' != a[x+1][y-1] || 'x' != a[x+1][y+1]){
                    cout << "no";
                    return 0;
        }
     
        cout << "yes";
        return 0;
    }

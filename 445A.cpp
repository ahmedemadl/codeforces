//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-07-22 23:19:56
// Problem Name: S_DZY_Loves_Chessboard
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m; cin >> n >> m;
    char arr[n][m];
    char ch;
    for(int i = 0 ; i < n ; i++){
        if(i % 2 == 0){
            ch = 'B';
        }
        else{
            ch = 'W';
        }
        for(int j = 0 ; j < m ; j++){
            arr[i][j] = ch;
            if(ch == 'B'){
                ch = 'W';
            }
            else{
                ch = 'B';
            }
        }
    }
    char a;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j++){
            cin >> a;
            if(a == '.'){
                cout << arr[i][j];
            }
            else{
                cout << a;
            }
        }
        cout << endl;
    }
    return 0;
}

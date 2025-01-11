//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-11 23:38:39
// Description : Junior Training Sheet V7.0
// Problem Code: 14A
// Problem Name: A_Letter
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m, first_posi = INT_MAX, first_posj = INT_MAX, last_posi = INT_MIN, last_posj = INT_MIN;
    cin >> n >> m;
    char x[n][m];
    bool found = false;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            cin >> x[i][j];
            if(x[i][j] == '*'){
                if(!found){
                    first_posi = i;
                    first_posj = j;
                    found = true;
                }
                first_posi = min(first_posi, i);
                first_posj = min(first_posj, j);
                last_posi = max(last_posi, i);
                last_posj = max(last_posj, j);
            }
        }
    }
    for(int i = first_posi ; i <=  last_posi; i ++){
        for(int j = first_posj ; j <= last_posj ; j ++){
            cout << x[i][j];
        }
        cout << endl;
    }



    return 0;
}

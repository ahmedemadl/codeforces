//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-07-24 23:38:44
// Description : Assiut University Training - 
// Problem Code: 219774
// Problem Name: B_Searching
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin >> n;
    int x[n];
    for(int i = 0 ; i < n ;i ++){
        cin >> x[i]; 
    }
    cin >> m;
    for (int i = 0 ; i < n ; i++){
        if (x[i] == m){
            cout << i;
            return 0;
        }
    }
    cout << "-1";
    return 0;
}

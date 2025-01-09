//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-09 19:23:33
// Description : Junior Training Sheet V7.0
// Problem Code: 577A
// Problem Name: A_Multiplication_Table
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, x, count = 0;
    cin >> n >> x;
  
    for(int i = 1; i <= n ; i++){
        if(x % i == 0 && (x/i) <= n){
            count++;
        }
    }
    cout << count ;

    return 0;
}

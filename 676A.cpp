//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-12-29 22:55:39
// Description : Junior Training Sheet V7.0
// Problem Code: 676A
// Problem Name: A_Nicholas_and_Permutation
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, a, b, num;
    cin >> n;
    for(int k = 1 ; k <= n ; k++){
        cin >> num;
        if(num == 1){
            a = k;
        }
        else if (num == n){
            b = k;
        }
    }
    if(a > b){
        swap(a, b);
    }
    if( n - b > a - 1){
        cout << n - a;
    }
    else if( n - b < a - 1){
        cout << b - 1 ;
    }
    else{
        cout << b - 1;
    }

    return 0;
}

//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-26 16:51:44
// Description : Junior Training Sheet V7.0
// Problem Code: 401A
// Problem Name: A_Vanya_and_Cards
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, x, a, sum = 0;
    cin >> n >> x;
    for(int i = 0 ; i < n ; i++){
        cin >> a;
        sum += a;
    }
    sum = abs(sum);
    if(sum % x == 0){
        cout << sum / x;
    }
    else{
        cout << sum / x + 1;
    }

    return 0;
}

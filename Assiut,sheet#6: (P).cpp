//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-14 08:16:09
// Problem Name: P_Factorial_Digits
// note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    double n, res=0;
    cin >> n;
    for(int i = 2; i <= n ; i++){
        res+=log10(i);
    }

    cout <<"Number of digits of " << n <<"! is " << floor(res + 1);

}

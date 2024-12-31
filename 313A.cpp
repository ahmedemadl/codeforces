//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-12-31 23:06:43
// Description : Junior Training Sheet V7.0
// Problem Code: 313A
// Problem Name: A_Ilya_and_Bank_Account
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;

    if (n >= 0) {
        cout << n << endl;
    } else {
        ll option1 = n / 10;
        ll option2 = (n / 100) * 10 + (n % 10);
        cout << max(option1, option2) << endl;
    }

    return 0;
}

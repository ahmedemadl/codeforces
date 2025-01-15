//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-15 21:15:42
// Description : Junior Training Sheet V7.0
// Problem Code: 670A
// Problem Name: A_Holidays
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;

    int min_holidays = (n / 7) * 2 + max(0, n % 7 - 5);
    int max_holidays = (n / 7) * 2 + min(2, n % 7);

    cout << min_holidays << " " << max_holidays << endl;

    return 0;
}

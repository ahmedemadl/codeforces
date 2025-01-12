//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-12 23:54:44
// Description : Junior Training Sheet V7.0
// Problem Code: 124A
// Problem Name: A_The_number_of_positions
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n, a, b;
    cin >> n >> a >> b;

    int result = min(n - a, b + 1);
    cout << result << endl;

    return 0;
}

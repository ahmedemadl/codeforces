//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-16 23:48:34
// Description : Junior Training Sheet V7.0
// Problem Code: 214A
// Problem Name: A_System_of_Equations
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n, m;
    cin >> n >> m;
    int count = 0;
    for (int a = 0; a * a <= n; a++) {
        int b = n - a * a;
        if (a + b * b == m) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

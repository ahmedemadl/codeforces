//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-04 23:07:48
// Description : Junior Training Sheet V7.0
// Problem Code: 659A
// Problem Name: A_Round_House
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
     int n, a, b;
    cin >> n >> a >> b;
    
    int k = (a + b) % n;
    if (k <= 0) {
        k += n;
    }
    
    cout << k;

    return 0;
}

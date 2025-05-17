//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-05-16 16:39:16
// Description : 
// Problem Code: 
// Problem Name: B_Mahmoud_s_Number
// Learned     : Arithmetic Progression (AP)
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    // arithmetic progression (AP)
    // The general formula for the n-th term is: an= a + (n-1) * d 
    // d = b-a
    ll a, b, n;cin>>a>>b>>n;
    cout << a + (n - 1) * (b - a);

    return 0;
}

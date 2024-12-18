//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-12-18 23:09:02
// Description : Junior Training Sheet V7.0
// Problem Code: 588A
// Problem Name: A_Duff_and_Meat
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, a, p, p_min= INT_MAX;
    cin >> n ;
    ll sum= 0;
    for(int i= 0 ; i < n; i ++){
        cin >> a >> p;
        if(p < p_min){
            p_min= p;
        }
        sum += (a*p_min);
    }
    cout << sum;

    return 0;
}

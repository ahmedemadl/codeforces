//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-03 20:01:10
// Description : Junior Training Sheet V7.0
// Problem Code: 276A
// Problem Name: A_Lunch_Rush
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, k, f, t, maxi = INT_MIN;
    cin >> n >> k;

    for(int i = 0 ; i < n ; i++){
        cin >> f >> t;
        if(t <= k){
            maxi = max(maxi, f);
        }
        else{
            maxi = max(maxi, f - (t - k));
        }
    }

    cout << maxi;

    return 0;
}

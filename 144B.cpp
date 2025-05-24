//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-05-23 15:25:43
// Problem Code: 144B
// Problem Name: C - Arrival of the General 
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;cin>> n;
    int maxi = 0;
    int mini = INT_MAX;
    int a[n];
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
        if(a[i] > maxi){
            maxi = a[i];
        }
        if(a[i] < mini){
            mini = a[i];
        }
    }

    int d_maxi = 0, d_mini = 0, pos_maxi, pos_mini;
    for(int i = 0 ; i < n ; i ++){
        if(a[i] == maxi){
            d_maxi= i;
            pos_maxi=i;
            break;
        }
    }
    for(int i = (n-1) ; i >=0 ; i--){
        if(a[i] == mini){
            d_mini = (n-1)-i;
            
            pos_mini=i;
            break;
        }
    }
    int ans = d_maxi + d_mini;
    
    if(pos_maxi > pos_mini){
        ans--;
    }
    cout << ans;
    return 0;
}

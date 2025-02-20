//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-02-20 23:45:03
// Description : Junior Training Sheet V7.0
// Problem Code: 581B
// Problem Name: B_Luxurious_Houses
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    int houses[n];
    for(int i = 0 ; i < n; i++){
        cin >> houses[i];
    }
    int ans[n];
    ans[n-1]=0; 
    int maxi =houses[n-1];
    for(int i = n-2 ; i >= 0; i--){
        if(houses[i] <= maxi){
            ans[i]= maxi - houses[i] + 1;
        }
        else{
            ans[i]= 0;
            maxi = houses[i];
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout << ans[i] << " ";
    }

    return 0;
}

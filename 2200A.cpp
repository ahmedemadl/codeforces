//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-02-27 16:37:17
// Problem Name: A_Eating_Game
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        int count=0;
        int arr[n];
        for(int i = 0; i < n;i++){
            cin>>arr[i];
            
        }
        int maxi = *max_element(arr,arr+n);
        for(int i = 0 ;i < n;i++){
            if(arr[i] == maxi ){
                count++;
            }
        }
        cout << count << '\n';
    }
    return 0;
}

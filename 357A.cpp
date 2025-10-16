//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-10-16 23:25:44
// Problem Name: A_Group_of_Students
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    int arr[n];

    ll sum=0;
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
        sum+= arr[i];
    }
    int x,y;cin >> x >> y;
    ll curr_sum=0;
    for(int i = 0 ; i < n ; i++){
        curr_sum+=arr[i];
        if(curr_sum >= x && curr_sum <= y && sum-curr_sum >=x && sum-curr_sum <= y){
            cout << i+2;
            return 0;
        }
    }
    cout << 0;
    return 0;   
}

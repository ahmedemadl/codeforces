//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-28 23:40:47
// Problem Name: C_Dragons
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int s, n;
    cin >> s >> n;


    vector<pair<int,int>> arr(n);
    for(int i = 0 ; i < n ; i++){
         cin >> arr[i].first >> arr[i].second;

    }
    sort(arr.begin(), arr.end());

    for(int i = 0 ; i < n; i++){
        if(s > arr[i].first){
            s+= arr[i].second;
        }
        else{
            cout << "NO"; return 0;
        }
    }
    cout << "YES";

    
    return 0;
}

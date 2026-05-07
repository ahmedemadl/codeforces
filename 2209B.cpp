//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-05-07 23:27:06
// Problem Name: B_Array
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
        vector<int> v(n);
        for(int i = 0 ;i < n ;i ++) cin >> v[i];
        for(int i = 0 ;i < n;i++){
            int high=0, low=0;
            for(int j = i+1 ; j < n ;j++){
                if(v[i] > v[j])low++;
                else if(v[i] < v[j]) high++;
            }
            cout << max(low,high) << " ";
        }
        cout << '\n';

    }
    return 0;
}

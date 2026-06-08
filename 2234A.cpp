//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-06-08 23:34:07
// Problem Name: A_Euclid_Sequence_and_Two_Numbers
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0 ;i < n;i++) cin >> v[i];
        sort(v.rbegin(), v.rend());
        bool valid =1;
        // for(int i = n-1; i >= 2 ; i--){
        //     if(v[i] + v[i-1] != v[i-2] ){
        //         valid = 0;
        //         break;
        //     }
        // }
        for(int i = 0 ;i < n-2;i++){
            if(v[i] % v[i+1] != v[i+2]){
                valid= 0;
                break;
            }
        }
        if(!valid) cout << "-1\n";
        else{
            cout << v[0] << " " << v[1] << '\n';
        }
    }
    return 0;
}

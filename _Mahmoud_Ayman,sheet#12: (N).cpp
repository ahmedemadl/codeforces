//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-05-28 21:53:49
// Description : Full Training 
// Problem Name: N_ICPC_Balloons
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t;cin >> t;
    while(t--){
        int n; cin >>n;
        int freq[26]={0};
        for(int i = 0 ; i < n ; i++){
            char s; cin >> s;
            int num = s - 'A';
            freq[num] += 1;
            
        }
        int sum =0;
        for(int i = 0 ; i < 26 ; i++){
            
            if(freq[i] > 0){
                sum += freq[i]+1;
            }
        }
        cout << sum <<'\n';
    }

    return 0;
}

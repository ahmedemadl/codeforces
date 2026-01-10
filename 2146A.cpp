//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-10-09 23:33:59
// Problem Name: A_Equal_Occurrences
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >>n;
        int freq[101]={0};
        for(int i = 0 ; i < n ; i++){
            int num; cin >> num;
            freq[num]++;
        }
        int count=0;
        int large= 0;
        int maxi = 0;
        sort(freq, freq + 101);
        reverse(freq, freq + 101);
        for(int i = 0 ; i < 101 ; i++){ 
            maxi = max(maxi, (i+1)*freq[i]); 
        }        
        cout << maxi << '\n';
    }
    return 0;
}

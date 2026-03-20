//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-20 02:43:35
// Problem Name: B_Not_simply_beatiful_strings
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s;cin >> s;
    int freq[26]{}, n_freq=0;
    int mx_1=0, mx_2=0;
    for(int i = 0 ;i < s.size();i++){
        freq[s[i] - 'a']++;
        if(freq[s[i] - 'a'] == 1){
            n_freq++;
        }
        mx_1= max(freq[s[i] - 'a'], mx_1);
    }
    if(n_freq == 1 || n_freq >= 5){
        cout << "No";
        return 0;
    }
    if(n_freq == 2){
        bool flag=1;
        for(int i = 0 ;i < 26 ;i++){
            if(freq[i] == 1)flag=0;
        }
        if(flag)cout << "Yes";
        else cout << "No";
    }else if(n_freq == 3){
        if(mx_1 > 1 ) cout << "Yes";
        else cout<<  "No";
    }else if( n_freq == 4){
        cout << "Yes";
    }
    return 0;
}

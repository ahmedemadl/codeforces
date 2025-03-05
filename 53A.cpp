//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-03-05 23:35:31
// Description : Junior Training Sheet V7.0
// Problem Code: 53A
// Problem Name: A_Autocomplete
// Learned     : strings
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    string s, word;
    cin >> s >> n;
    string ans= s;
    for(int i = 0 ; i < n ; i++){
        cin >> word;
        if(word == s){
            cout << s;
            return 0;
        }
        if(word.find(s)== 0){  
            if(ans== s){
                ans = word;
            }
            else{
                if(word < ans){
                ans= word;
                }
            }
        }
        
        
        
    }
    cout << ans;
    return 0;
}

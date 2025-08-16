//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-08-16 23:08:29
// Problem Name: U_From_S_To_T
// Problem Code: 1194C
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >>n;
    while(n--){
        string s,t,p; cin >> s >> t >> p;
        int freq[26] = {}, freq_t[26]={};
        bool flag= 1, flag_2= 1;
        int j = 0 ;
        for(int i = 0 ; i < t.size(); i ++){
            if(s[j] == t[i] && flag_2){
                j++;
            }
            else{
                int num = t[i] - 'a';
                freq_t[num]++;
            }
            if(j == s.size()){
                flag_2 = 0;
            }
        }
        if(j != s.size() ){
            cout << "NO"<<'\n';
        }
        else{
            for(char ch : p){
                int num = ch - 'a';
                freq[num]++;
            }
            for(int i = 0 ; i < 26; i++){
                if(freq[i] < freq_t[i]){
                    flag = 0;
                    break;
                }
            }
            if(flag){
                cout << "YES" << '\n';
            }
            else{
                cout <<"NO" << '\n';
            }
        }
    }

    return 0;
}

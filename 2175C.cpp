//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-01-06 14:23:57
// Problem Name: C_Needle_in_a_Haystack
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int k; cin >> k;
    while(k--){
        string s, t;cin >> s >> t;
        int freq1[26]={},freq2[26]={};
        for(int i = 0 ;i < s.size();i++){
            int ch = s[i] - 'a';
            freq1[ch]++;
        }
        for(int i = 0 ;i < t.size();i++){
            int ch = t[i] - 'a';
            freq2[ch]++;
        }
        bool valid=1;
        for(int i = 0 ;i < 26 ;i ++){
            if(freq2[i] < freq1[i]){
                valid=0;
                break;
            }
        }
        if(!valid){

        cout << "Impossible" << '\n';
        continue;
        }
        string m="";
        for(int i = 0 ;i < t.size() ;i++){
            int ch = t[i] - 'a';
            if(freq1[ch] > 0){
                freq1[ch]--;
            }else{
                m+=t[i];
            }
        }
    
        sort(m.begin(), m.end());
        // cout << m << "///// " << s <<"////  ";
        int j=0, a=0;
        string ans = "";
        for(int i = 0 ; i < t.size();i++){
            if(a != m.size()){
                if(j == s.size() || (ans + m[a] < ans+ s[j])){
                    ans+= m[a];
                    a++;
                }else{
                    ans+= s[j];
                    j++;
                }
            }else{
                ans+=s[j];
                j++;
            }
        }
        cout << ans << '\n';



    }
    return 0;
}

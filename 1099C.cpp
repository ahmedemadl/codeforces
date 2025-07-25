//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-07-25 18:47:57
// Description : Junior Training Sheet V7.0
// Problem Code: 1099C
// Problem Name: M_Postcard
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s; cin >> s;
    int k ; cin >> k;
    int snow_count = 0 , candy_count= 0 ;
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == '?'){
            candy_count++;
        }
        else if(s[i] == '*'){
            snow_count++;
        }
    }
    int l = s.size() - (candy_count + snow_count);
    int neg = candy_count + snow_count;
    int pos = snow_count;
    if(k == l){
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] != '?' && s[i] != '*'){
                cout << s[i];
            }
        }
    }
    else if(k > l){
        int left = k - l;
        if(pos == 0){
            cout << "Impossible"; return 0;
        }
        for(int i = 0 ; i < s.size() ; i ++){
            if(left > 0 && s[i] == '*'){
                while(left --){
                    cout << s[i-1];
                }
            }
            else if(s[i] != '?' && s[i] != '*'){
                cout << s[i];
            }
        }
    }
    else if(k < l){
        int left = l - k;
        if(left > neg){
            cout << "Impossible"; return 0;
        }
        for(int i = 0 ; i < s.size() ; i ++){
            if(left > 0 && s[i+1] == '*'){
                left--;
            }
            else if(left > 0 && s[i+1] == '?'){
                left--;
            }
            else if(s[i] != '?' && s[i] != '*'){
                cout << s[i];
            }
        
        }    
    }

    return 0;
}

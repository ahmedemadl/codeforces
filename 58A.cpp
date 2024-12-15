//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-12-15 23:17:49
// Description : Junior Training Sheet V7.0
// Problem Code: 58A
// Problem Name: A_Chat_room
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s, s2 = "hello";
    cin >> s;
    int j= 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == s2[j]){
            if(j == 4){
                cout <<"YES";
                return 0;
            }
            j++;
        }
    }
    cout <<"NO";
    return 0;
}

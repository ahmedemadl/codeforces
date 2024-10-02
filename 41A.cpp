//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-10-02 23:16:29
// Description : Junior Training Sheet V7.0
// Problem Code: 41A
// Problem Name: A_Translation
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s, t;
    cin >> s >> t;
    if (s.length() != t.length()){
        cout << "NO";
        return 0;
    }
    for (int i = 0, j = t.length()-1 ; i < s.length() ; i++ , j--){
        if(s[i] != t[j]){
            cout << "NO";
            return 0;
        }
    }
    
    cout << "YES";
    return 0;
}

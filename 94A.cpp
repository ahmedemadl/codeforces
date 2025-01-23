//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-23 19:51:35
// Description : Junior Training Sheet V7.0
// Problem Code: 94A
// Problem Name: A_Restoring_Password
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; 
    cin >> s;

    unordered_map<string, char> mp;
    string code;

  
    for (int i = 0; i < 10; i++) {
        cin >> code;
        mp[code] = '0' + i; 
    }
    string result = "";
   

 
    for (int i = 0; i < 80; i += 10) {
        string segment = s.substr(i, 10);
        result += mp[segment]; 
    }

    cout << result ;

    return 0;
}

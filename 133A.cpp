//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-12-12 23:24:39
// Description : Junior Training Sheet V7.0
// Problem Code: 133A
// Problem Name: A_HQ_9
// Learned     : silly trick
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;

    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}

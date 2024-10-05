//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-10-05 23:06:45
// Description : Junior Training Sheet V7.0
// Problem Code: 118A
// Problem Name: B_Vasya_and_Cornfield
// Learned     : strings
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    for (int i = 0 ; i < s.length() ; i++){
        if (isupper(s[i])){
           s[i] = tolower(s[i]);
        }
        if(s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i'){
            continue;
        }
        else{
            cout << "." << s[i];
        }
    }
    return 0;
}

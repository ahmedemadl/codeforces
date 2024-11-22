//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-11-22 23:38:44
// Description : Junior Training Sheet V7.0
// Problem Code: 141A
// Problem Name: A_Amusing_Joke
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s1, s2, s;
    cin >> s1 >> s2 >> s;
    int freq[26] = {0};

    for (int i = 0 ; i < s.length(); i++){
        freq[s[i] - 'A']++;
    }
    for (int i = 0 ; i < s1.length(); i++){
        freq[s1[i] - 'A']--;
    }
    for (int i = 0 ; i < s2.length(); i++){
        freq[s2[i] - 'A']--;
    }
    for(int i = 0 ; i < 26 ; i++){
        if(freq[i] != 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}

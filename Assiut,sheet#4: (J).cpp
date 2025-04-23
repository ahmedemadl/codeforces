//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-04-23 09:15:07
// Description : 
// Problem Code: 
// Problem Name: J_Count_Letters
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    int freq[26]={};
    for(int i = 0 ; i < s.size() ; i++){
        int num = s[i] - 'a';
        freq[num]++;
    }
    for(int i = 0 ; i < 26 ;  i++){
        if(freq[i] == 0)continue;
        char ch= i + 'a';
        cout << ch << " : " << freq[i] << '\n';
    }
    return 0;
}

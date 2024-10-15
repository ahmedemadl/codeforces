//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-10-15 13:34:34
// Description : Junior Training Sheet V7.0
// Problem Code: 518B
// Problem Name: B_Tanya_and_Postcard
// Learned     : ASCII && strings
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s, t;
    cin >> s >> t;
    int count1 = 0 , count2 = 0, diff;
    int f1[156] = {0};
    int f2[156] = {0};

    for (int i = 0 ; i < s.length() ; i++){
        f1[s[i]-'0']++;
    }
    for (int i = 0 ; i < t.length() ; i++){
        f2[t[i]-'0']++;
    }
    
    for(int i = 0 ; i <= 122; i++){
        diff = min(f1[i],f2[i]);
        count1 += diff;
        f1[i]-= diff;
        f2[i]-= diff;
    }

       for(int i = 0 ; i <= 122; i++){
        diff = min(f1[i],f2[i+32]);
        count2 += diff;
        f1[i]-= diff;
        f2[i+32]-= diff;

        diff = min(f1[i+32],f2[i]);
         count2 += diff;
        f1[i+32]-= diff;
        f2[i]-= diff;
    }
    
    cout << count1 << " " << count2;

    return 0;
}

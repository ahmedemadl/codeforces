//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-08-07 21:07:41
// Description : Junior Training Sheet V7.0
// Problem Code: 265A
// Problem Name: A_Colorful_Stones_Simplified_Edition
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s , t ;
    cin >> s >> t;
    int count = 1, j = 0;
    for (int i = 0 ; i < t.length() ; i++){
        if (t[i] == s[j]){
            count ++;
            j++;
        }
    }
    cout << count;

    return 0;
}

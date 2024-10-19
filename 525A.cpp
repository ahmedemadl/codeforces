//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-10-19 21:11:59
// Description : Junior Training Sheet V7.0
// Problem Code: 525A
// Problem Name: A_Vitaliy_and_Pie
// Learned     : unordered_map 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;

    unordered_map<char, int> keys;
    
    for (int i = 0 ; i < 2*n -2 ; i+=2){
        keys[s[i]]++;
        char  door = tolower(s[i+1]);
        if(keys[door] > 0){
            keys[door]--;
        }
        else{
            count ++;
        }
    }
    cout << count;

    return 0;
}

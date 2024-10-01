//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-10-01 23:18:38
// Description : Junior Training Sheet V7.0
// Problem Code: 556A
// Problem Name: A_Case_of_the_Zeros_and_Ones
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s;
    int n;   
    cin >> n >> s;
    int zeros = 0, ones = 0;

    for (int i = 0 ; i < n; i++){
        if (s[i] == '0'){
            zeros ++;
        }
        else{
            ones++;
        }
    }
    int result = abs(ones - zeros);
    cout << result;
    return 0;
}

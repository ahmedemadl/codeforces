//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-10 23:48:36
// Description : Junior Training Sheet V7.0
// Problem Code: 540A
// Problem Name: A_Combination_Lock
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, answer = 0;
    cin >> n;
    string num1, num2;
    cin >> num1 >> num2;
    for(int i = 0; i < n ; i++){
        int x = num1[i] - '0';
        int y = num2[i] - '0';
        int steps = min(abs(x-y), 10-abs(x-y));
        answer += steps;
    }
    cout << answer;
    

    return 0;
}

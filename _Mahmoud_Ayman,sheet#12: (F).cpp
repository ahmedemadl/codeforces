//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-05-20 13:58:09
// Problem Name: F_Mahmoud_forgot_the_the_problem
// Learned     : freq
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int freq[6]={},num;
    for(int i = 1 ; i < 6 ; i++){
        cin >> num;
        freq[num]++;
    }
    for(int i = 1 ; i < 6 ; i++){
        if(freq[i] == 0){
            cout << i;
            return 0;
        }
    }
    return 0;
}

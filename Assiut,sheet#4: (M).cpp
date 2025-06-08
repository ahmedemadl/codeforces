//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-08 07:52:39
// Problem Name: N_Max_Subsequence
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;cin>>n;
    string s;cin>>s;
    int count = 1;
    for(int i = 1 ; i < n ; i++){
        
        if(s[i] != s[i-1]){
            count++;
        }
    }
    cout << count;
    return 0;
}

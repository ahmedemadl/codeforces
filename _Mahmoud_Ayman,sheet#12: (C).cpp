//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-05-18 15:08:36
// Description : Full Training 
// Problem Code: 
// Problem Name: D_Missing_Number
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;cin>>n;
    int freq[n+1]={}, num;
    for(int i = 0 ; i < n; i++){
        cin >> num;
        freq[num]++;
    }
    for(int i = 1; i <=n ; i++){
        if(freq[i] == 0){
            cout << i;
        }
    }

    return 0;
}

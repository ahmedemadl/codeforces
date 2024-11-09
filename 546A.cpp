//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-11-09 22:43:32
// Description : Junior Training Sheet V7.0
// Problem Code: 546A
// Problem Name: A_Soldier_and_Bananas
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll k, n, w;
    cin >> k >> n >> w;

    ll sum = 0;
    for (int i = 1 ; i <= w ; i++){
        sum += (i * k);
    }

    if( sum > n){
    ll answer = (sum - n);
    cout << answer;

    }
    else{
        cout << 0;
    }
    return 0;
}

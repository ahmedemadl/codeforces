//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-18 15:44:59
// Problem Name: P_Log_2
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int counter = 0;
void Afunction(ll n){
    
    if(n == 1){
        return;
    }
    counter++;
    Afunction(n/2);
    
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n; cin >> n; 
    Afunction(n);
    cout <<counter;

    return 0;
}

//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-12 23:57:35
// Problem Name: M_Divisible
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string num1;
    ll num2;
    cin >> num1 >> num2;
    ll ans=0;
    for(int i = 0 ; i < num1.size() ; i++){
        ans*=10;
        ans+= num1[i] - '0';
        ans %= num2;
    }
    if(ans == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}

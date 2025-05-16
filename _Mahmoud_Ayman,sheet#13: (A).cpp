//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-05-14 07:16:46
// Description : 
// Problem Code:
// Problem Name: A. Mahmoud's Algorithm
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin>>n;cout<<n<<' ';
    while(n != 1){
        if(n % 2 == 0){
            n/=2;
        }
        else{
            n*=3;
            n++;
        }
        cout << n <<' ';
    }

    return 0;
}

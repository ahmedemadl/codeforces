//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-09-13 20:32:28
// Description : Junior Training Sheet V7.0
// Problem Code: 610A
// Problem Name: A_Pasha_and_Stick
// Learned     : combinatorics
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    if ( n % 2 != 0){
        cout << 0;
        return 0;
    }
    n/=2;
    if ( n < 3){
        cout << 0;
        return 0;
    }
    if ( n % 2 != 0){
        cout << n/2;
    }
    else{
        cout << n/2 - 1;
    }

    return 0;
}

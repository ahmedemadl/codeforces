//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-03-13 23:42:59
// Description : Junior Training Sheet V7.0
// Problem Code: 355A
// Problem Name: A_Vasya_and_Digital_Root
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int k, d;
    cin >> k >> d;

    if(d == 0 && k > 1){
        cout << "No solution";
        return 0;
    }
    cout << d;
    for(int i = 1 ; i < k ; i++){
        cout << 0;
    }

    return 0;
}

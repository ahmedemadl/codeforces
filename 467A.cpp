//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-10-13 22:18:59
// Description : Junior Training Sheet V7.0
// Problem Code: 467A
// Problem Name: A_George_and_Accommodation
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    short N, p, q, count = 0;
    cin >> N;

    for (short i = 0 ; i < N ; i ++){
        cin >> p >> q;
        if(q >= p +2){
            count ++;
        }
    }
    cout << count ;
    return 0;
}

//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-10-10 23:39:56
// Description : Junior Training Sheet V7.0
// Problem Code: 950A
// Problem Name: A_Left_handers_Right_handers_and_Ambidexters
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    short A, B, C;
    cin >> A >> B >> C;

    while ( C > 0 && A != B ){
        if ( A > B ){
            B++;
        }
        else{
            A++;
        }
        C--;
    }

    A += C/2;
    B += C/2;

    short result = 2 * min (A, B);
    cout << result;
    return 0;
}

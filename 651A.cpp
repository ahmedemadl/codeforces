//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-19 23:51:25
// Description : Junior Training Sheet V7.0
// Problem Code: 651A
// Problem Name: A_Joysticks
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int a, b;
    cin >> a >> b;
    int minutes = 0;

    while (a > 0 && b > 0) {
        if (a < b) swap(a, b);
        if (a >= 2 && b >= 1) {
            a -= 2;
            b += 1;
            minutes++;
        } else {
            break;
        }
    }

    cout << minutes << endl;

    return 0;
}

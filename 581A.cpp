//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-10-29 23:29:51
// Description : Junior Training Sheet V7.0
// Problem Code: 581A
// Problem Name: A_Vasya_the_Hipster
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int a, b;
    cin >> a >> b;

    int wear_diff = min (a, b);
    int wear_same = abs(a-b) / 2;

    cout << wear_diff << " "<< wear_same;

    return 0;
}

//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-19 22:30:21
// Description : Junior Training Sheet V7.0
// Problem Code: 723A
// Problem Name: A_The_New_Year_Meeting_Friends
// Learned     : none
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int x1, x2,x3; 
    cin >> x1 >>x2 >> x3;
    int maxi = max({x1,x2,x3});
    int mini = min({x1,x2,x3});

    cout << maxi - mini;

    return 0;
}

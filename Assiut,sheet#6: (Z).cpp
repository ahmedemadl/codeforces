//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-16 07:37:16
// Problem Name: Z_Geometry_Test
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    double R, S;
    cin >> R >> S;
    double num = S*sqrt(2);
    if((2*R) <= S){
        cout << "Square";
    }
    else if((2*R) >= num){
        cout << "Circle";
    }
    else{
        cout << "Complex";
    }

    return 0;
}

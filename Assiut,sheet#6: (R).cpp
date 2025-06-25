//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-14 13:23:03
// Problem Name: R_Distance_points
// Learned     : easiest shit ever 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    double x1,y1,x2,y2; 
    cin >> x1 >> y1 >> x2 >> y2;
    double res = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    cout << fixed << setprecision(9) << res;

    return 0;
}

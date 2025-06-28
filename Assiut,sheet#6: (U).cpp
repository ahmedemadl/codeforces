//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-14 15:35:51
// Problem Name: U_Straight_Line
// Learned     : Given three points on the Cartesian plane: Area= 1/2 *​ ∣x1​(y2​−y3​)+x2​(y3​−y1​)+x3​(y1​−y2​)∣
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    double x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double Area= 0.5 * abs(x1*(y2-y3) + x2*(y3- y1) + x3* (y1-y2));
    
    cout << ((Area == 0) ? "YES" : "NO");
    return 0;
}

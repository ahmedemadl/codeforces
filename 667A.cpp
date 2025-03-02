//=====================================================
// Author      : 
// Date        : 2025-03-02 23:29:28
// Description : Junior Training Sheet V7.0
// Problem Code: 667A
// Problem Name: A_Pouring_Rain
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI = acos(-1);

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int d, h, v, e;
    cin >> d >> h >> v >> e;
    double area = (PI * d * d) / 4, x = v / area;
    if (x <= e) { cout << "NO"; }
    else {
        cout << "YES" << '\n';
        cout << fixed << setprecision(12) << h / (x - e);
    }
    return 0;
}

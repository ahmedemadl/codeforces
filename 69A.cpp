//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-09-29 21:08:53
// Description : Junior Training Sheet V7.0
// Problem Code: 69A
// Problem Name: A_Young_Physicist
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    short n, x, y, z;
    int x_sum = 0, y_sum = 0, z_sum = 0;
    cin >> n;
    for (short i = 0 ; i < n ; i++){
        cin >> x >> y >> z;
        x_sum += x;
        y_sum += y;
        z_sum += z;
    }
    if (x_sum == 0 && y_sum == 0 && z_sum == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}

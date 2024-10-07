//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-10-07 23:36:46
// Description : Junior Training Sheet V7.0
// Problem Code: 456A
// Problem Name: A_Laptops
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int n;
    cin >> n;
    
    vector<pair<int, int>> laptops(n);
    
    // Input price and quality for each laptop
    for (int i = 0; i < n; i++){
        cin >> laptops[i].first >> laptops[i].second;
    }

    // Sort laptops by price
    sort(laptops.begin(), laptops.end());

    // Check if there's a case where quality decreases while price increases
    for (int i = 0; i < n - 1; i++){
        if (laptops[i].second > laptops[i + 1].second){
            cout << "Happy Alex";
            return 0;
        }
    }

    cout << "Poor Alex";
    return 0;
}

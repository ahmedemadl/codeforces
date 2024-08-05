//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-08-03 19:04:23
// Description : Junior Training Sheet V7.0
// Problem Code: 186B
// Problem Name: B_Growing_Mushrooms
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, t1, t2, k; 
    cin >> n >> t1 >> t2 >> k;
    vector<pair<int, double>> vec;
    for (int i = 0; i < n; i++){
        int a, b;  
        cin >> a >> b;
        double h1 = (a * t1 - a * t1 * k / 100.0) + (b * t2);
        double h2 = (b * t1 - b * t1 * k / 100.0) + (a * t2);
        double h = max(h1, h2);
        vec.emplace_back(i + 1, h);
    }

    // Sorting the vector based on the second value in decreasing order,
    // and by the first value in increasing order if the second values are equal
    sort(vec.begin(), vec.end(),
         [](const pair<int, double>& a, const pair<int, double>& b) {
             if (abs(a.second - b.second) < 1e-9) { // Close enough to be considered equal
                 return a.first < b.first; // Increasing order based on the first value
             }
             return a.second > b.second; // Decreasing order based on the second value
         });

    // Output the sorted pairs with exactly two decimal places
    for (const auto& p : vec) {
        cout << p.first << " " << fixed << setprecision(2) << p.second << endl;
    }

    return 0;
}

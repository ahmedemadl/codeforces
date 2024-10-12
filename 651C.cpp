#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> vec(n);
    map<int, int> x_count, y_count;
    map<pair<int, int>, int> point_count;  // Use pair<int, int> as key for point_count
    
    // Input the points
    for (int i = 0; i < n; i++) {
        cin >> vec[i].first >> vec[i].second;
        x_count[vec[i].first]++;
        y_count[vec[i].second]++;
        point_count[{vec[i].first, vec[i].second}]++;  // Corrected point_count usage
    }

    long long count = 0;
    
    // Calculate pairs with the same x-coordinate
    for (auto &p : x_count) {
        count += (long long)(p.second) * (p.second - 1) / 2;
    }
    
    // Calculate pairs with the same y-coordinate
    for (auto &p : y_count) {
        count += (long long)(p.second) * (p.second - 1) / 2;
    }
    
    // Subtract the overcounted pairs with exactly the same coordinates
    for (auto &p : point_count) {
        count -= (long long)(p.second) * (p.second - 1) / 2;
    }
    
    cout << count;
    return 0;
}

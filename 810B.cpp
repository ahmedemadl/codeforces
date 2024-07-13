//=====================================================
// Author      : chat gpt
// Date        : 2024-07-13 22:34:23
// Description : Junior Training Sheet V7.0
// Problem Code: 810B
// Problem Name: B_Summer_sell_off
// Learned     : 
//=====================================================
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, f;
    cin >> n >> f;
    vector<pair<int, int>> days(n);
    for (int i = 0; i < n; i++) {
        cin >> days[i].first >> days[i].second;
    }

    long long totalSales = 0;
    vector<long long> potentialGains;

    for (int i = 0; i < n; i++) {
        int ki = days[i].first;
        int li = days[i].second;
        totalSales += min(ki, li);
        long long gainWithSellOut = min(2 * ki, li) - min(ki, li);
        potentialGains.push_back(gainWithSellOut);
    }

    sort(potentialGains.rbegin(), potentialGains.rend());

    for (int i = 0; i < f; i++) {
        totalSales += potentialGains[i];
    }

    cout << totalSales << endl;

    return 0;
}

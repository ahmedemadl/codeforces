//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-07-22 23:06:49
// Description : Junior Training Sheet V7.0
// Problem Code: 152B
// Problem Name: B_Steps
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m, x, y, k, num1, num2;
    long long steps = 0;
    cin >> n >> m >> x >> y >> k;

    for (int i = 0; i < k; i++) {
        cin >> num1 >> num2;
        
        int max_steps = INT_MAX;
        if (num1 > 0) {
            max_steps = min(max_steps, (n - x) / num1);
        } else if (num1 < 0) {
            max_steps = min(max_steps, (1 - x) / num1);
        }
        
        if (num2 > 0) {
            max_steps = min(max_steps, (m - y) / num2);
        } else if (num2 < 0) {
            max_steps = min(max_steps, (1 - y) / num2);
        }

        x += num1 * max_steps;
        y += num2 * max_steps;
        steps += max_steps;
    }

    cout << steps;

    return 0;
}

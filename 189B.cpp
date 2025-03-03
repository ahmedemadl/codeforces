#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int w, h;
    cin >> w >> h;
    
    long long count = 0;
    
    for (int cx = 0; cx <= w; cx++) {
        for (int cy = 0; cy <= h; cy++) {
            int max_dx = min(cx, w - cx);
            int max_dy = min(cy, h - cy);
            count += 1LL * max_dx * max_dy;
        }
    }
    
    cout << count << "\n";
    return 0;
}

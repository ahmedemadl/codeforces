#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    int min_diff = INT_MAX;
    int idx1 = 0, idx2 = 0;

    for (int i = 0; i < n; i++) {
        // Calculate the difference with the next soldier (wrap around for the last soldier)
        int diff = abs(heights[i] - heights[(i + 1) % n]);
        if (diff < min_diff) {
            min_diff = diff;
            idx1 = i;
            idx2 = (i + 1) % n;
        }
    }

    // Output the indices (convert to 1-based)
    cout << idx1 + 1 << " " << idx2 + 1 << endl;

    return 0;
}

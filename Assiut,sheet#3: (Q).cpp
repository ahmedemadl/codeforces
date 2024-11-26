#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        long long count = 0;  // To store the total count of non-decreasing subarrays
        int length = 1;       // Length of the current non-decreasing segment

        for (int i = 1; i < N; ++i) {
            if (A[i] >= A[i - 1]) {
                length++;  // Extend the current segment
            } else {
                count += (long long)length * (length + 1) / 2;  // Add subarrays from the segment
                length = 1;  // Reset the segment length
            }
        }

        // Add the last segment
        count += (long long)length * (length + 1) / 2;

        cout << count << endl;
    }
    return 0;
}

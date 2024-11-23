

    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        long long N;
        cin >> N;
        
        long long low = 1, high = 2 * sqrt(N), ans = 0;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long sum = mid * (mid + 1) / 2;
            if (sum <= N) {
                ans = mid; // mid is a valid candidate
                low = mid + 1; // try for a larger k
            } else {
                high = mid - 1; // try for a smaller k
            }
        }
        
        cout << ans << endl;
        return 0;
    }

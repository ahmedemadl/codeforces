#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    while (cin >> N >> M) {
        if (N <= 0 || M <= 0) {
            break;
        }

        int sum = 0;
        if (N > M) {
            swap(N, M);  // Ensure N is always less than or equal to M
        }

        for (int i = N; i <= M; i++) {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}

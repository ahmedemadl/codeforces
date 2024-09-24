    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        int T;
        cin >> T;
        while (T--) {
            int N;
            cin >> N;
            vector<int> A(N);
            for (int i = 0; i < N; i++) {
                cin >> A[i];
            }
            
            vector<int> results;
            
            for (int i = 0; i < N; i++) {
                int current_max = A[i];
                for (int j = i; j < N; j++) {
                    current_max = max(current_max, A[j]);
                    results.push_back(current_max);
                }
            }
            
            for (int res : results) {
                cout << res << " ";
            }
            cout << endl;
        }
        return 0;
    }

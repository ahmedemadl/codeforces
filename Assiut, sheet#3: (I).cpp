#include <iostream>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        int min_result = INT_MAX;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int result = A[i] + A[j] + j - i;
                min_result = min(min_result, result);
            }
        }
        
        cout << min_result << endl;
    }
    
    return 0;
}

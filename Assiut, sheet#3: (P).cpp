#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int operations = 0;
    bool allEven = true;
    
    while (allEven) {
        for (int i = 0; i < N; i++) {
            if (A[i] % 2 != 0) {
                allEven = false;
                break;
            }
        }
        
        if (allEven) {
            for (int i = 0; i < N; i++) {
                A[i] /= 2;
            }
            operations++;
        }
    }
    
    cout << operations << endl;
    return 0;
}

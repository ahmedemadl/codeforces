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

    int minIndex = 0, maxIndex = 0;
    
    for (int i = 1; i < N; i++) {
        if (A[i] < A[minIndex]) {
            minIndex = i;
        }
        if (A[i] > A[maxIndex]) {
            maxIndex = i;
        }
    }

    swap(A[minIndex], A[maxIndex]);

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    return 0;
}

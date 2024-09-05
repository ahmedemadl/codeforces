#include <iostream>
#include <vector>
using namespace std;

// Function to concatenate array B followed by array A
vector<int> concatenateArrays(const vector<int>& A, const vector<int>& B) {
    vector<int> C;
    
    // First add elements of B to C
    for (int b : B) {
        C.push_back(b);
    }
    
    // Then add elements of A to C
    for (int a : A) {
        C.push_back(a);
    }
    
    return C;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N), B(N);
    
    // Reading elements of array A
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    // Reading elements of array B
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    
    // Get the concatenated array
    vector<int> C = concatenateArrays(A, B);
    
    // Print the elements of array C
    for (int c : C) {
        cout << c << " ";
    }
    
    cout << endl;
    
    return 0;
}

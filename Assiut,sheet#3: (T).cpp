#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int matrix[N][N];
    int primarySum = 0, secondarySum = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
            if (i == j) {
                primarySum += matrix[i][j];
            }
            if (i + j == N - 1) {
                secondarySum += matrix[i][j];
            }
        }
    }
    
    cout << abs(primarySum - secondarySum) << endl;
    
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    int matrix[N][M];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }
    
    int X;
    cin >> X;
    
    bool found = false;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (matrix[i][j] == X) {
                found = true;
                break;
            }
        }
        if (found) break;
    }
    
    if (found) {
        cout << "will not take number" << endl;
    } else {
        cout << "will take number" << endl;
    }

    return 0;
}

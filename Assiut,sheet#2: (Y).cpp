#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> fibonacci(N);

    if (N >= 1) {
        fibonacci[0] = 0;
    }
    if (N >= 2) {
        fibonacci[1] = 1;
    }

    for (int i = 2; i < N; ++i) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    for (int i = 0; i < N; ++i) {
        if (i > 0) {
            cout << " ";
        }
        cout << fibonacci[i];
    }
    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    
    long long a = 0, b = 1, fib;
    for (int i = 3; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return b;
}

int main() {
    int N;
    cin >> N;
    cout << fibonacci(N) << endl;
    return 0;
}

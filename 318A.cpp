#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    
    // Calculate the middle point (number of odd elements)
    long long mid = (n + 1) / 2;

    // Determine the k-th element
    if (k <= mid) {
        // The k-th element is in the odd numbers
        cout << 2 * k - 1 << endl;
    } else {
        // The k-th element is in the even numbers
        cout << 2 * (k - mid) << endl;
    }

    return 0;
}

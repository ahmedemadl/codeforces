#include <iostream>
using namespace std;
 
long long sumAll(long long n) {
    return n * (n + 1) / 2;
}
 
long long sumEven(long long n) {
    long long k = n / 2;
    return k * (k + 1);
}
 
long long sumOdd(long long n) {
    long long k = (n + 1) / 2;
    return k * k;
}
 
int main() {
    long long a, b;
    cin >> a >> b;
 
    if (a > b) swap(a, b);
 
    long long totalSum = sumAll(b) - sumAll(a - 1);
 
    long long totalEvenSum = sumEven(b) - sumEven(a - 1);
 
    long long totalOddSum = sumOdd(b) - sumOdd(a - 1);
 
    cout << totalSum << endl;
    cout << totalEvenSum << endl;
    cout << totalOddSum << endl;
 
    return 0;
}

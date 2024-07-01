//=====================================================
// Author      : ahmedgbr367
// Date        : 1/7/2024
// Description : Assiut University Training - 
// Problem Type: L
// Problem No. : 219432
//=====================================================
#include <iostream>
using namespace std;

// Function to calculate GCD using Euclidean algorithm
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    long long a,b;
    cin>>a>>b;

    // Calculate the GCD
    long long gcdValue = gcd(a, b);
   
   
        cout << gcdValue;
    
    return 0;
}

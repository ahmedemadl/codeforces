//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-11 11:23:10
// Problem Name: K_Combination_and_Permutation
// Learned     : Combination = n! / r!(n-r)! and Permutation = n! / (n-r)!
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll factorial(ll n){
    ll sum = 1;
    for(int i = 2 ; i <= n ; i++){
        sum *= i;
    }
    return sum;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll A,B;
    cin >> A >> B;

    ll NCR = factorial(A) / (factorial(B) * factorial(A-B)); // Combination
    ll NPR = factorial(A) /  factorial(A-B); // Permutation

    cout << NCR << " " << NPR;
    return 0;
}

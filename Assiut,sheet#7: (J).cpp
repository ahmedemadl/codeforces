#include <bits/stdc++.h>
using namespace std;
long long Recursion(long long n){
    if (n == 0){
        return 1;
    }
    return n * Recursion(n-1);
}
int main(){

    cin.tie(0)->sync_with_stdio(0);
    long long n;
    cin >> n;

    long long result = Recursion(n);
    cout << result;
    return 0;
}

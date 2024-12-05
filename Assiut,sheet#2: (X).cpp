#include <bits/stdc++.h>
using namespace std;

int main() {
    short T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;

        int ones = __builtin_popcount(n); // built in function to count 1s in binary

        int result = (1 << ones) - 1;
        cout << result << endl;
    }
    return 0;
}

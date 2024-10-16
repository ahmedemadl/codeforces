#include <bits/stdc++.h>
using namespace std;

void Recursion(int n){
    if(n == 0){  // base case
        return;
    } 
    Recursion(n/2);
    cout << n % 2;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    short T;
    cin >> T;

    while (T--){
        int n;
        cin >> n;
        Recursion(n);
        cout << endl;
    }

    return 0;
}

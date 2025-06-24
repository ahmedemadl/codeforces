//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-23 21:57:02
// Problem Name: Q_3_n_1_sequence
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int counter = 0;
void Myfunction(int n){
    counter++;
    if(n == 1){
        return;
    }

    if(n %2 != 0){
        Myfunction(3*n+1);
    }
    else{
        Myfunction(n/2);
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    Myfunction(n);
    cout << counter;

    return 0;
}

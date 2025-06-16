//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-12 03:34:27
// Problem Name: L_Pascal_Triangle
// Learned     : Pascal Triangle
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    int value = 1;
    for(int i = 0 ; i < n ; i++){
        value = 1;
        for(int j = 0 ; j <= i ; j++){

            cout << value << " ";
            value = value * (i-j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}

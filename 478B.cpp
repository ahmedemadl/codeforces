//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-09-13 19:05:34
// Description : Junior Training Sheet V7.0
// Problem Code: 478B
// Problem Name: B_Random_Teams
// Learned     : combinatorics
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int N, M;
    cin >> N >> M;

    long long n = N - M + 1;
    int r = 2;

    long long maxi = n * (n-1) / 2;
    
    n = N/M;
    int left = N % M;
    
    long long mini = n*(n-1) / r * (M-left);
    mini += (n+1) * n / r * left;
    cout << mini <<" " << maxi; 
    return 0;
}

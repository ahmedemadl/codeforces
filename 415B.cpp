//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-09-09 16:57:27
// Description : Junior Training Sheet V7.0
// Problem Code: 415B
// Problem Name: B_Mashmokh_and_Tokens
// Learned     : Basic Math
//=====================================================
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    cin.tie(0)->sync_with_stdio(0);
    long long n, a, b;
    cin >> n >> a >> b;
    for(int i = 0 ; i < n ; i++){
        long long w;
        cin >> w;
 
        cout << w * a % b / a << ' ';
    }
    return 0;
}

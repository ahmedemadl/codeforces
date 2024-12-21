//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-12-21 23:43:50
// Description : Junior Training Sheet V7.0
// Problem Code: 447A
// Problem Name: A_DZY_Loves_Hash
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int p, n, num, m;
    cin >> p >> n;
    int frq[p+1] = {0};
    for(int i = 1; i <= n; i++){
        cin >> num ;
        m = num % p;
        if(frq[m] == 1){
            cout << i;
            return 0;
        }
        else{
            frq[m]++;
        }
    }
    cout << "-1";
    return 0;
}

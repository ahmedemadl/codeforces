//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-05-29 14:00:09
// Description : Full Training
// Problem Code: 
// Problem Name: O_Mahmoud_and_Tall_Building
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        double n,k,m;cin >> n >> m >> k;
        n--;
        double ans =k/m*n;
        cout << fixed << setprecision(10) << ans<< '\n';
    }
    
    return 0;
}

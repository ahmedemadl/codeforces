//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-08-13 09:10:14
// Description : Junior Training Sheet V7.0
// Problem Code: 376B
// Problem Name: B_I_O_U
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    short n, m, a, b, c;
    int sum = 0 ;
    cin >> n >> m;
    short x[n] = {0};
    for ( short i = 0 ; i < m ; i++){
        cin >> a >> b >> c;
        x[a-1] -= c;
        x[b-1] += c;
    
    }
    for ( short i = 0 ; i < n ; i++){
     if (x[i] > 0)
     sum += x[i];   
    }
    cout << sum;
    return 0;
}

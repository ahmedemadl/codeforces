//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-30 23:25:11
// Description : Junior Training Sheet V7.0
// Problem Code: 218B
// Problem Name: B_Airport
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m;
    ll min = 0, max = 0;
    cin >> n >> m;
    int x[m], y[m];
    for (int i = 0 ; i < m ; i++){
        cin >> x[i];
        y[i] = x[i];
    }
    sort(x, x + m);
    sort(y, y + m, greater<int>());
    int ntemp = n;
    for(int i = 0 ; i < m ; i++){
        
           while(x[i] > 0 && n > 0){
            min += x[i];
            x[i]--;
            n--;
        }
    }
    for(int j = 0 ; j < m ; j++){

        while(y[j] > 0 && ntemp > 0){
            max += y[j];
            y[j]--;
            ntemp--;
        }
    }
    cout << max << " " << min ;
    return 0;
}

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
    vector <int> x(m), y(m);
    for (int i = 0 ; i < m ; i++){
        cin >> x[i];
        y[i] = x[i];
    }
    
    for(int i = 0 ; i < n ; i++){
        sort(x.begin(), x.end());
            min += x[0];
            x[0]--; 
        if(x[0] == 0){
            x.erase(x.begin());
        }
    }
    for(int j = 0 ; j < n ; j++){
        sort(y.begin(), y.end() , greater<int>());
            max += y[0];
            y[0]--;
        if(y[0] == 0){
            y.erase(y.begin());
        }
    }
    cout << max << " " << min ;
    return 0;
}

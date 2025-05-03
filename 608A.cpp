//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-05-03 19:05:08
// Description : Junior Training Sheet V7.0
// Problem Code: 608A
// Problem Name: A_Saitama_Destroys_Hotel
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n , m, t = 0;
    cin >> n >> m;
    vector<pair<int,int>> v;
    for (int i = 0  ; i < n ; i++){
        int a, b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.rbegin(),v.rend());

    for(int i = 0 ; i < n ; i++){
        if(i == 0){
            t = m - v[0].first;
        }
        else{
            t+= v[i-1].first-v[i].first;
        }

        if(v[i].second > t){
            t = v[i].second;
        }

        
    }
    t += v[n-1].first - 0;
    cout << t; 

    return 0;
}

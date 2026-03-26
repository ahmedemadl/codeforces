//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-26 10:42:54
// Problem Name: B_Line_Segments
// Note        : شفت حلها فكره حلوه مش صعبه
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        double sum = 0;
        vector<double> v(n+1);
        for(int i = 0 ;i <n ;i++){
            cin >> v[i];
            sum += v[i];
        }
        
        double dis = (x1 - x2) * (x1 - x2)  + (y1 - y2) * (y1 - y2);
        dis = sqrtl(dis);
        sum += dis;
        v[n] =dis;
        bool valid=1;
        for(int i =0 ;i <= n; i++){
            if(v[i] > sum - v[i])valid=0;
        }
        cout <<(valid ? "Yes" : "No" ) << '\n';

    }
    return 0;
}

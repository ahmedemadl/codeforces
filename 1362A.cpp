//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-14 20:33:26
// Problem Name: A_Johnny_and_Ancient_Computer
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        ll a, b;cin >> a >> b;
        if(a < b)swap(a,b);
        ll count1 = 0, count2=0;
        while( a % 2LL == 0){
            a /= 2LL;
            count1++;
        }
        while( b % 2LL == 0){
            b /= 2LL;
            count2++;
        }
        // cout << count1 << " " << count2 << '\n';
        // cout << a << " " <<  b  << '\n';
        ll count = abs(count1 - count2);
        // cout << count << "/ ";
        if(a != b){
            cout << -1 << '\n';
        }
        else{
            ll ans=0;
            while(count >= 3){
                count -=3;
                ans++;
            }
            while(count >= 2){
                count -= 2;
                ans++;
            }
            cout << ans + count << '\n';
        }
        // int diff = abs(pos_a - pos_b);
        // int count = 0;
        // while(diff %3 == 0){
        //     diff/=3;
        //     count++;
        // }
        // while(diff %2 == 0){
        //     diff/=2;
        //     count++;
        // }
        // count += diff;
        // cout << count << '\n';
    }
    return 0;
}

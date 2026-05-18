//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-05-18 23:41:45
// Problem Name: A_Marisa_Steals_Reimu_s_Takeout
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        int one= 0, two = 0,zero=0;
        for(int i = 0 ;i < n ; i++){
            int num;cin >> num;
            if(num == 0){
                zero++;
            }else if(num == 1){
                one++;
            }else{
                two++;
            }
        }
        int count = min(one, two);
        one -= count;
        two-= count;
        if(one > 0){
            count += (one/3);
        }else if(two > 0){
            count+= (two / 3);
        }

        cout << zero + count << '\n'; 
    }
    return 0;
}

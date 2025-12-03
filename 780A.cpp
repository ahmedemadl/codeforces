//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-12-02 23:09:45
// Problem Name: A_Andryusha_and_Socks
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n; 
    cin >> n;
    map<int,int> mp;
    int count = 0;
    int ans = 0;
    for(int i = 0;i < 2*n;i ++){
        int num;
        cin >> num;
        if(mp[num] == 0){
            mp[num]++;
            count++;
        }else{
            mp[num] = 0;
            count--;
        }
        ans = max(ans, count);
    }
    cout << ans << '\n';
    return 0;
}

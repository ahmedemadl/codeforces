//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-04-10 15:54:55
// Problem Name: B_Nirvana
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string n;cin >> n;
    int size = n.size();
    ll maxi = 1;
    for(int i = 0 ;i < size; i++){
        maxi*= n[i] - '0';
    }
    
    ll remain=1;
    for(int i = 0 ;i < size;i++){
        // remove one digit
        if(n[0] == '0'){
            break;
        }
        ll num = n[i] -'0';
        num--;
        num = max(num, 1LL);
        int k = size - (i+1);
        while(k--){
            num*= 9LL;
        }
        maxi = max(maxi, num* remain);
        remain *= n[i] - '0';
    }
    cout << maxi ;
    return 0;
}

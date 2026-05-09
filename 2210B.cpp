//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-05-09 23:27:46
// Problem Name: B_Simply_Sitting_on_Chairs
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int count=0;
        for(int i= 1 ; i <= n; i++){
            int num;cin >> num;
            if(num <= i) count++;
        }
        cout << count << '\n';
    }
    return 0;
}

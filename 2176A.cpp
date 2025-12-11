//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-12-11 16:40:03
// Problem Name: A_Operations_with_Inversions
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
        int count = 0;
        int maxi = 0;
        for(int i = 0 ;i < n; i++){
            int num;cin >> num;
            if(maxi > num )count++;
            maxi = max(num, maxi);
        
        }
         cout << count << '\n';

    }
    return 0;
}

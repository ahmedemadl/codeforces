//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-07-04 18:04:02
// Problem Name: C_Recursive_Queries
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int arr[10][1000001];
int freq[10] = {0};
    
ll myfunction(ll n){
    if(n < 10){
        return n;
    }
    ll pro=1;
    while(n > 0){
        if(n%10 != 0){
            pro *= n%10;
        }
        n/=10;
    }
    return myfunction(pro);
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t; 

    for(int i = 1 ; i <= 1000000; i++){
        int num = myfunction(i);
        freq[num]++;
        for(int j = 1 ; j <= 9; j++){
          arr[j][i]= freq[j];
        }

    }
    
    while(t--){
        int l, r, k; cin >> l >> r >> k;

        cout << (arr[k][r])-(arr[k][l-1]) << '\n';
    }

    return 0;
}

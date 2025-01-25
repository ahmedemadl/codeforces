//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-25 23:40:17
// Description : Junior Training Sheet V7.0
// Problem Code: 148A
// Problem Name: A_Insomnia_cure
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    int count = 0;
    for(int i = 1 ; i <= d ; i++){
        if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0){
            count ++;
        }
    }   
    cout << count;

    return 0;
}

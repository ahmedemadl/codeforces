//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-11 10:26:07
// Problem Name: J_Prime_Factors
// Learned     : math 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;cin >> n;
    int m = n;
    for(int i = 2 ; i <= m ; i++){
        bool flag = 0;
        int power = 0;
        
        while(n % i == 0){
            power++;
            n/=i;
            flag =1;   
        }
        if(flag){
            cout << "(" << i << "^" << power << ")";
            if(n != 1){
                cout << "*";
            }
        }
        if(n == 1){
            break;
        }
    }

    return 0;
}

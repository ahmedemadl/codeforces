//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-11-17 20:57:33
// Description : Junior Training Sheet V7.0
// Problem Code: 271A
// Problem Name: A_Beautiful_Year
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;

    for (int i = n+1 ; i <= INT_MAX; i++){
        int m = i, f[10] = {0};
        bool check = 1;
        for (int j = 1; j <= 4 ; j++){
            int a = m % 10;
            m = m / 10;
            if(f[a] >= 1){
                check = 0;
                break;
            }
            else{
                f[a]++;
            }
        }
        if(check == 1){
            cout << i ;
            return 0;
        }
    }   

    return 0;
}

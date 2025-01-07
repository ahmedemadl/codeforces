//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-07 23:40:00
// Description : Junior Training Sheet V7.0
// Problem Code: 369A
// Problem Name: A_Valera_and_Plates
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m, k, dish, output = 0;
    cin >> n >> m >> k;
    
    for(int i= 0 ; i < n ; i++){
        cin >> dish;
        if(dish == 1){
            if(m > 0){
                m--;
            }
            else{
                output++;
            }
            

        }
        else{
            if(k >0){
                k--;
            }
            else if (m > 0){
                m--;
            }
            else{
                output++;
            }
        }
    }
    cout << output ;
    return 0;
}

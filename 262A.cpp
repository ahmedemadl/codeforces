//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-11-18 23:38:45
// Description : Junior Training Sheet V7.0
// Problem Code: 262A
// Problem Name: A_Roma_and_Lucky_Numbers
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    short n, k, count = 0;
    cin >> n >> k;

    for (short i = 0 ; i < n; i++){
        int num, lucky = 0;
        cin >> num;
        while(num > 0){
            int a = num % 10;
            num = num / 10;
            if(a == 4 || a == 7){
                lucky ++;
            }   
        }
        
        if(lucky <= k){
            count ++;
        }
    }  
    cout << count;
    return 0;
}

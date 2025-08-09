//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-08-08 23:01:13
// Description : Junior Training Sheet V7.0
// Problem Code: 1669D
// Problem Name: D_Colorful_Stamp
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        char arr[n+2];
        arr[0] = 'W';
        arr[n+1] = 'W';
        int R = 0, B = 0;
        bool flag = 1;
        for(int i = 1 ; i <= n ; i++){
            cin >> arr[i];
            if(arr[i] == 'R'){
                R++;
            }
            else if(arr[i] == 'B'){
                B++;
            }
        }
        
        for(int i = 0 ; i <= n+1; i ++){           
            if(arr[i] == 'W'){
                if(B!= 0 || R != 0){
                if(B != 0 && R == 0){
                    flag = 0;
                    break ;
                }
                else if(R != 0 && B == 0){
                    flag = 0;
                    break;
                }
                R = 0;
                B = 0;
                }
            }
            if(arr[i] == 'R'){
                R++;
            }
            else if(arr[i] == 'B'){
                B++;
            }
        }
        if(flag == 0){
            cout << "NO" << '\n';
        }
        else{
            cout << "YES" << '\n';
        }
    }

    return 0;
}

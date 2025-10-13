//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-10-05 20:44:59
// Problem Name: B_Abraham_s_Great_Escape
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        if(k/n == n-1 && k%n == n-1){
            cout << "NO"<<'\n';
        }else{
            char arr[n][n];
            for(int i = 0 ; i < n; i++){
                for(int j = 0 ; j < n; j++){
                    if(j != n-1){
                        arr[i][j]='R';
                    }else{
                        arr[i][j] ='L';
                    }

                }
            }
            int lines= k/n;
            for(int i = 0 ; i < lines; i++){
                arr[i][n-1]='R';
            }
            int remain = k%n;
            if(remain != 0 && lines < n-1){
                for(int i = 0 ; i < n; i < i++){
                    if(remain > 0){
                        arr[lines][i] = 'U';
                        remain--;                        
                    }else{
                        arr[lines][i]='D';
                    }
                }
            }else if(remain != 0 && lines == n-1){
                for(int i = 0 ; i < n ; i++){
                    arr[lines][i]='L';
                    remain--;
                    if(remain==0){
                        break;
                    }
                }
            }
            cout << "YES" << '\n';
            for(int i = 0 ; i < n ; i++){
                for(int j = 0 ; j < n; j++){
                    cout << arr[i][j];
                }
                cout << '\n';
            }

        }

    }
    return 0;
}

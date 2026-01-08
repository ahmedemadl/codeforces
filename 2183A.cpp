//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-01-08 08:15:08
// Problem Name: A_Binary_Array_Game
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
        int arr[n];
        bool valid =0;
        for(int i =  0 ;i < n;i++){
            cin >> arr[i];
            if(arr[i] == 0){
                valid =1;
            }
        }

        if(arr[0] == 0 && arr[n-1] == 0){
             cout << "Bob" << '\n';
        }else if(!valid){
            cout << "Alice" << '\n';
        }
        else{
        cout << "Alice" << '\n';
        }
    }
    return 0;
}

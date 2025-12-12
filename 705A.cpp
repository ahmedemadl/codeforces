//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-12-12 15:01:37
// Problem Name: A_Hulk
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;cin >> n;
    for(int i = 1;i <= n ;i ++){
        if(i % 2  == 0){
            cout << "I love ";
        }else{
            cout << "I hate ";
        }

        if(i == n){
            cout << "it";
        }else{
            cout << "that ";
        }
    }
    return 0;
}

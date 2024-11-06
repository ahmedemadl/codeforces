//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-11-05 23:23:12
// Description : Junior Training Sheet V7.0
// Problem Code: 454A
// Problem Name: A_Little_Pony_and_Crystal_Mine
// Learned     : useless problem
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    int stars = (n/2);
    int D = 1;
    for(int i = 0 ; i < (n+1)/2 ; i++, stars --, D+=2){
        for(int j  = 1; j <= stars ; j++){
            cout << "*";
        }
        for(int j = 1 ; j <= D ; j++){
            cout << "D";
        }
        for(int j  = 1; j <= stars ; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    stars +=2;
    D-=4;
    for(int i = 0 ; i < n/2 ; i++, stars ++, D-=2){
        for(int j  = 1; j <= stars ; j++){
            cout << "*";
        }
        for(int j = 1 ; j <= D ; j++){
            cout << "D";
        }
        for(int j  = 1; j <= stars ; j++){
            cout << "*";
        }
        cout << endl;
    }


    return 0;
    

    return 0;
}

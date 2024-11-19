//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-11-19 22:54:15
// Description : Junior Training Sheet V7.0
// Problem Code: 384A
// Problem Name: A_Coder
// Learned     : يااارب
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    bool x = 0;
    if( n % 2 != 0){
        x = 1;
    }
    cout << (n*n) /2 + x<< endl;
    char coder = 'C', point = '.';
    for(int i = 0 ;i < n ; i++){
        if(i % 2 == 0){
            coder = 'C';
            point = '.';
        }
        else{
            coder = '.';
            point = 'C';
        }
        for(int j = 0 ; j < n; j++){
            if (j % 2 == 0){
                cout << coder;
            }
            else{
                cout << point;
            }
        }
        cout << endl;
    }


    return 0;
}

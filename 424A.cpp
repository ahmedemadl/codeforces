//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-05 22:12:36
// Description : Junior Training Sheet V7.0
// Problem Code: 424A
// Problem Name: A_Squats
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,sitting = 0 , standing = 0;
    cin >> n;
    char x[n];
    for(int i = 0 ; i < n;  i++){
        cin >> x[i];
        if(x[i] == 'x'){
            sitting++;
        }
        else{
            standing++;
        }
    }
    if (sitting == standing){
        cout << "0" << endl;
        for(int i = 0 ; i < n ; i++){
            cout << x[i];
        }
    }
    else if(sitting > standing){
        int diff = (sitting - standing) / 2;
        cout << diff << endl;
        for(int i = 0 ; i < n ; i++){
            if(x[i] == 'x' && diff > 0){
            cout << "X";
            diff--;
            }
            else{
                cout << x[i];
            }
        }
    }
    else{
        int diff = (standing - sitting)  / 2;
        cout << diff << endl;
        for(int i = 0 ; i < n ; i++){
            if(x[i] == 'X' && diff > 0){
            cout << "x";
            diff--;
            }
            else{
                cout << x[i];
            }
        }
    }
    return 0;
}

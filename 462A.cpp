//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-11-24 23:33:17
// Description : Junior Training Sheet V7.0
// Problem Code: 462A
// Problem Name: A_Appleman_and_Easy_Task
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    short count ;
    char x[n+2][n+2];
    for(int i = 0 ; i < n+2; i++){
        x[i][0] = 'x';
        x[i][n+1] = 'x';
        x[0][i] = 'x';
        x[n+1][i] = 'x';
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1 ; j <= n ; j++){
            cin >> x[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1 ; j <= n ; j++){
            count = 0;
           if(x[i+1][j] == 'o'){
            count ++;
           } 
           if(x[i][j+1] == 'o'){
            count ++;
           } 
           if(x[i-1][j] == 'o'){
            count ++;
           } 
           if(x[i][j-1] == 'o'){
            count ++;
           } 

           if(count % 2 != 0){
            cout << "NO";
            return 0;
           }
        }
    }
    cout << "YES";
    return 0;
}

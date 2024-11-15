//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-11-15 20:02:53
// Description : Junior Training Sheet V7.0
// Problem Code: 378A
// Problem Name: A_Playing_with_Dice
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int a, b, wins = 0, draw = 0, lose = 0;
    cin >> a >> b;
    for (int i = 1; i <= 6; i++){
        if(abs(i-a) < abs(i-b)){
            wins ++;
        }
        else if(abs(i-a) == abs(i-b)){
            draw++;
        }
        else{
            lose++;
        }
    }
    cout << wins << " " << draw << " " << lose;

    return 0;
}

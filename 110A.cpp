//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-11-14 22:25:02
// Description : Junior Training Sheet V7.0
// Problem Code: 110A
// Problem Name: A_Nearly_Lucky_Number
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, current, lucky_numbers = 0;
    cin >> n;

    while(n > 0){
        current = n % 10;
        n = n/10;
        if(current == 4 || current == 7){
            lucky_numbers ++;
        }
    }
   
    if(lucky_numbers == 4 || lucky_numbers == 7){
        cout <<  "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}

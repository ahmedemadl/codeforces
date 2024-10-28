//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-10-28 18:27:59
// Description : Junior Training Sheet V7.0
// Problem Code: 88C
// Problem Name: C_Trains
// Learned     : LCM
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(int a , int b){
    while(a != 0){
        if(a < b){
            swap(a, b);
        }
        a = a % b;
        }
    return b;
    }
int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll a, b;
    cin >> a >> b;

    ll LCM = a*b/gcd(a,b);
    a =  LCM / a;
    b =  LCM / b;
 
    (a < b) ? a++ : b++; 

    if(a == b){
        cout << "Equal";
    }
    else if(a > b){
        cout << "Dasha";
    }
    else{
        cout <<"Masha";
    }
    return 0;
}

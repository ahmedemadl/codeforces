//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-10-25 14:33:31
// Description : Junior Training Sheet V7.0
// Problem Code: 371B
// Problem Name: B_Fox_Dividing_Cheese
// Learned     : GCD & MATH
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int GCD(int a, int b){
    while (a != 0){
        if(b > a){
            swap(a, b);
        }
        a = a % b;
    }
    return b;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int a, b, count = 0;
    cin >> a >> b;

    int gcd = GCD(a, b); 

    int agcd = a/gcd;
    int bgcd = b/gcd;
    while (agcd % 5 == 0){
        count ++;
        agcd = (agcd) / 5;
    }
    while (agcd % 3 == 0){
        count ++;
        agcd = (agcd) / 3;
    }
    while (agcd % 2 == 0){
        count ++;
        agcd = (agcd) / 2;
    }
   
    
    while (bgcd % 5 == 0){
        count ++;
        bgcd = (bgcd) / 5;
    }
    while (bgcd % 3 == 0){
        count ++;
        bgcd = (bgcd) / 3;
    }
    while (bgcd % 2 == 0){
        count ++;
        bgcd = (bgcd) / 2;
    }

    if(agcd != 1 || bgcd != 1){
        cout << -1;
        return 0;
    }

    cout << count;
    return 0;
}

//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-12-30 23:42:18
// Description : Junior Training Sheet V7.0
// Problem Code: 146A
// Problem Name: A_Lucky_Ticket
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, sum1 = 0 , sum2 = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0 ; i < n ; i++){
        if(s[i] != '4' && s[i] != '7'){
            cout << "NO";
            return 0;
        }
        if(i < n / 2){
            sum1 += s[i] - '0';
        }
        else{
            sum2 += s[i] - '0';
        }
    }
    if(sum1 == sum2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}

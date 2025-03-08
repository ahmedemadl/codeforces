//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-03-07 23:41:18
// Description : Junior Training Sheet V7.0
// Problem Code: 75A
// Problem Name: A_Life_Without_Zeros
// Learned     : No Creativity in this code
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int a, b;
    cin >> a >> b;
    ll sum1 = a + b;
    string x = to_string(a);
    string y = to_string(b);
    string first_num = to_string(sum1);

    for(int i = 0 ; i < first_num.length(); i++){
       if(first_num[i] == '0'){
        first_num.erase(i,1);
        i--;
       }
    }

    for(int i = 0 ; i < x.length(); i++){
        if(x[i] == '0'){
            x.erase(i,1);
            i--;
           }
    }

    for(int i = 0 ; i < y.length(); i++){
        if(y[i] == '0'){
            y.erase(i,1);
            i--; // small but impactable mistake to forget this operation 
           }
    }

    int c = stoi(x);
    int d = stoi(y);
    ll first = stoll(first_num);
    ll second = c + d;
    
    cout << ((second != first) ? "NO" : "YES");
    return 0;
}

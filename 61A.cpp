//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-11-05 22:51:09
// Description : Junior Training Sheet V7.0
// Problem Code: 61A
// Problem Name: A_Ultra_Fast_Mathematician
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string N1, N2;
    cin >> N1 >> N2;
    for(int i = 0 ; i < N1.length() ; i++){
        if(N1[i] == N2[i]){
            cout << "0";
        }
        else{
            cout <<"1";
        }
    }

    return 0;
}

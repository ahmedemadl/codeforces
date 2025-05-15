//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-05-15 16:16:46
// Description : full training
// Problem Code: 
// Problem Name: A. Nice Word
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >>s;
    int length= 6/s.size();
    for(int i = 0 ; i < length ; i++){
        cout <<s;
    }
    return 0;
}

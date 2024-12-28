//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-12-28 23:37:47
// Description : Junior Training Sheet V7.0
// Problem Code: 672A
// Problem Name: A_Summer_Camp
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> x;
    for(int i = 1; x.size() < 1000; i++){
        string s = to_string(i);
        for(char c : s){
            x.push_back(c - '0');
        }
    }
    cout << x[n - 1];

    return 0;
}

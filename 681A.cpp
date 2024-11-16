//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-11-16 22:53:11
// Description : Junior Training Sheet V7.0
// Problem Code: 681A
// Problem Name: A_A_Good_Contest
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    short n, before, after;
    string s;
    cin >> n;
    for (int i = 0 ; i < n ;i++){
        cin >> s >> before >> after;
        if(before >= 2400 && after > before){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}

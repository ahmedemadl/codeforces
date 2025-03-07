//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-03-07 23:41:18
// Description : Junior Training Sheet V7.0
// Problem Code: 75A
// Problem Name: A_Life_Without_Zeros
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string a, b;
    cin >> a >> b;
    for(int i = 0 ; i < a.length(); i++){
       if(a[i] == '0' && b[i] != '0'){
        cout << "NO";
        return 0;
       }
       else if (b[i] == '0' && a[i] != '0'){
        cout << "NO";
        return 0;
       }
       int x = a[i] - '0';
       int y = b[i] - '0';
       if((x + y) > 9){
        cout << "NO";
        return 0;
       }
    }
    cout << "YES";
    return 0;
}

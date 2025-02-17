//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-02-17 23:48:16
// Description : Junior Training Sheet V7.0
// Problem Code: 255B
// Problem Name: B_Code_Parsing
// Learned     : easy but the person who wrote the description of the problem should go to jail
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    int x=0, y=0;
    for(char c : s ){
        if(c == 'x'){
            x++;
        }
        else{
            y++;
        }
    }
    char a;
    if(x > y){
        a = 'x';
    }
    else{
        a = 'y';
    }
    int length = abs(x - y);
    string ans="";
    for(int i = 0 ; i < length ; i++){
        ans+= a;
    }

    cout << ans;
    return 0;
}

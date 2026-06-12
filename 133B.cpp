//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-06-12 23:40:05
// Problem Name: B_Unary
// Note        : boring af
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s;cin >> s;
    int ans = 0;
    for(auto c : s){
        ans*=16;
        ans%= 1000003;
        if(c == '>')ans+= 8;
        else if(c == '<') ans += 9;
        else if(c == '+') ans += 10;
        else if(c == '-') ans += 11;
        else if(c == '.') ans += 12;
        else if(c == ',') ans += 13;
        else if(c == '[') ans += 14;
        else if(c == ']') ans += 15;
        ans%= 1000003;
    }
    cout << ans;

    return 0;
}
/*\

 ">"  →  1000,
"<"  →  1001,
"+"  →  1010,
"-"  →  1011,
"."  →  1100,
","  →  1101,
"["  →  1110,
"]"  →  1111. 

*/

//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-02-25 23:21:03
// Description : Junior Training Sheet V7.0
// Problem Code: 535B
// Problem Name: A_Tavas_and_Nafas
// Learned     : easy data structure
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    string singles[9] = {"one", "two", "three" , "four", "five" ,"six", "seven","eight", "nine"};
    string tens[9] = {"ten", "twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string teens[10] = {"ten","eleven", "twelve", "thirteen", "fourteen","fifteen","sixteen","seventeen", "eighteen", "nineteen"};
    if(s[0] == '0'){
        cout << "zero";
        return 0;
    }
    if(s.length() == 1){
        int a = s[0] - '0';
        cout << singles[a-1];
    }
    else{
        
        int a = s[0] - '0';
        if(a == 1){
            int a = s[1] - '0';
            cout << teens[a];
            return 0;
        }
        cout << tens[a-1];
        a = s[1] - '0';
        if(a == 0){
            return 0;
        }
        cout <<"-" << singles[a-1];
    }
    return 0;
}

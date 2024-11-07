//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-11-07 19:41:42
// Description : Junior Training Sheet V7.0
// Problem Code: 26B
// Problem Name: B_Regular_Bracket_Sequence
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    int count = 0 , total = 0;

    for(int i = 0 ; i < s.length() ; i++){
          
            if(s[i] == '('){
                count++;
            }
            else{
                if(count != 0){
                    count --;
                    total += 2;
                }
            }
    }   

    cout << total;
    
    return 0;
}

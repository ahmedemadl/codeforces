//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-02-14 23:43:31
// Problem Name: A_Hotelier
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s = "0000000000";
    int n;cin >> n;
    string op;cin >> op;
    for(int i = 0; i < n;i++){
        if(op[i] == 'R'){
            for(int j = 9 ;j >=0; j--){
                if(s[j] == '0'){
                    s[j]='1';
                    break;
                }
            }
        }else if( op[i] == 'L'){
            for(int j = 0 ;j <=9; j++){
                if(s[j] == '0'){
                    s[j] ='1';
                    break;
                }
            }
        }else{
            int num = op[i] - '0';
            s[num] ='0';
        }
    }
    cout << s;
    return 0;
}

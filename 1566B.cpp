//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-10-23 15:59:54
// Problem Name: J_MIN_MEX_Cut
// Note        : Optimize mooorrrrrrrrrrrrreeeeeee
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    short t; cin >> t;
    while(t--){
        string s;cin >> s;
        bool flag1 = 0, flag2 = 0, flag3 = 0; 
        for(int i = 0 ; i < s.size() ; i ++){
            if(s[i] == '0'){
                if(!flag1) flag1 = 1;
                else
                    if(flag2) flag3 = 1;
            }else
                if(flag1) flag2 =1;
        }
        if(!flag1) cout << "0" <<'\n';
        else if(flag1 && !flag3) cout << "1" << '\n';
        else if(flag3) cout << "2" << '\n';
    }
    return 0;
}

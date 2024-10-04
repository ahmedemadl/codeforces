//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-10-03 23:01:36
// Description : Junior Training Sheet V7.0
// Problem Code: 1009B
// Problem Name: B_Minimum_Ternary_String
// Learned     : GREEDY
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s;
    int count_1 = 0, count_0 = 0;
    bool after_2_happen = 0;
    cin >> s;
    for (int i = 0 ; i < s.length(); i ++){
        if(s[i] == '2'){
            after_2_happen = 1;
        }

        if(s[i] == '0' && after_2_happen == 0){
            count_0 ++;
            s.erase(s.begin() + i);
            i--;
        }

        if( s[i] == '1'){
            count_1 ++;
            s.erase(s.begin() + i);
            i--;
        }
    }

    for(int i = 0 ; i < count_0 ; i++){
        cout << "0";
    }
    for(int i = 0 ; i < count_1 ; i++){
        cout << "1";
    }
    cout << s ;

    return 0;
}




//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-01-30 15:29:10
// Problem Name: B_Seats
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        string s;cin >> s;
        if(s.find('1') == -1){
            
            cout << (n+2)/3 <<'\n';
            continue;
        }
        int count=0;
        if(s[0] == '0' && s[1] =='0'){
            if(n >= 3 && s[2] == '1') s[0]='1';
            else s[1]= '1';
        }
        if(s[n-1] == '0' && s[n-2] == '0'){
            if( n >= 3 && s[n-3] == '1')s[n-1] = '1';
            else s[n-2]='1';
        }
        int st=0;

        for(int i = 0; i < n;i++){
            if(s[i] == '0'){
                st++;
            }else{
                count++;
                if(st >= 2)
                count+= st/3;
                st=0;
            }
        }
        if(st > 2)
        count+= st/3;

        cout << count << '\n';    

    }
    return 0;
}

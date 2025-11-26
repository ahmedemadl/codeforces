//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-11-27 00:23:30
// Problem Name: B_Catch_Overflow
// جبتك يا بنت المتن*** 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    // unsigned k = 1LL << 32;
    int t; cin >> t;
    ll x= 0, mul =1;
    int extra=0;
    bool valid = 1;
    bool large =0;
    stack<ll> st;
    while(t--){
        string s;cin >> s;
        if(s == "add"){
            // cout << "large :" << large ;
            if(large){
                valid =0 ;
                break;
            }
            x+= mul;
        } 
        else if(s == "for"){
            ll num; cin >> num;
            if((mul* num)+1 > (1LL << 32) || large){// critical thinking hard core
                large=1;
                extra++;
            }else{
                mul*=num;
                st.push(num);            
            }


        }else if(s == "end"){
            if(!large){
                mul /= st.top();
                st.pop();                
            }else{
                extra--;
                if(extra==0)large=0;
            }

        }
        if(x+1 > (1LL << 32) || x < 0){
            valid = 0;
            break;
        }
        if(!valid)break;
    }
    if(valid)cout << x; 
    else cout << "OVERFLOW!!!";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n ;
        string s;
        cin >> s;
        n-=1;
        while(n--){
            string m;cin >>m;
            string op1 = m,op2 = s;
            op1+= s;
            op2+= m;
            if(op1 < op2){
                s= op1;
            }else{
                s=op2;
            }
        }
        cout << s << '\n';

    }
    return 0;
}

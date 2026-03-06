//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-06 06:13:31
// Problem Name: D_Take_a_Guess
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int and_ask(int i, int j){
    cout << "and " << i << " " << j << '\n' << '\n';
    cout.flush();
    int res;cin >> res;
    return res;
}
int or_ask(int i, int j){
    cout << "or " << i << " " << j << '\n' << '\n';
    cout.flush();
    int res;cin >> res;
    return res;
}
 
int main(){
    int n, k; cin >> n >> k;
    vector<int> v(n);
    int and_res1= and_ask(1, 2);
    int or_res1 = or_ask(1, 2);
    int and_res2= and_ask(2, 3);
    int or_res2= or_ask(2, 3);
    int and_res3= and_ask(1, 3);
    int or_res3= or_ask(1, 3); 
 
    int missing = and_res1 ^or_res1;
    int add=0;
    for(int i = 0  ; i < 31; i++){
        if(((1 << i) & or_res2) && !((1 << i) & and_res3) && ((1 << i) & missing)){
            add |= (1<<i);
        }
    }   
    v[1] = and_res1 | and_res2 | add;
    v[0] = and_res1 + (v[1]^or_res1);
    v[2] = and_res2 + (v[1]^or_res2);
    for(int i = 3; i < n; i++){
        int and_res = and_ask(i+1, i);
        int or_res = or_ask(i+1, i);
        v[i] = and_res + (v[i-1]^ or_res);
    }
 
    sort(v.begin(),v.end());
 
    cout << "finish " << v[k-1];
    return 0;
}

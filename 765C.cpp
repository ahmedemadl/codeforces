//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-04-01 11:05:37
// Problem Name: C_Table_Tennis_Game_2
// Note        : never ignore THE NOTE !!
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int k, a, b;cin >> k >> a >> b;
    if(a < k && b < k ) cout << -1 << '\n';
    else if(a%k && b < k) cout << -1 << '\n';
    else if(b%k && a < k) cout << -1  << '\n';
    else{ 
        cout << a / k + b / k << '\n';

    }
    return 0;
}
/*
given : k = 11 a = 11 , b = 5
30
if (a < k && b < k) cout << -1;
20 30

a golden rule :
if you get wrong , find the case that fails for approach
if there is a game complete 
remain a , remain b
spend reamain a in a round of b
spend remain b in a round of a 
if(remain of a%k and b < k) cout << -1
if(remain of b%k and a < k) cout << -1

*/

//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-02-05 02:39:39
// Problem Name: B_Sherlock_and_his_girlfriend
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long
	
ll not_prime[100002]={0};
	
int main(){
    cin.tie(0)->sync_with_stdio(0);
    // عمك سيف
	for(int i = 2; i * i < 100002 ; i++){
	    if(!not_prime[i]){
	        for(int j = i*i ; j < 100002; j+=i){
	            not_prime[j] = 1;
            }
	    }
	}
    ll n;cin >> n;
    if(n>2)cout << 2 << '\n';
    else cout << 1 << '\n';
    for(ll i= 2 ;i <= n+1;i++){
        if(not_prime[i])cout << 2 << " ";
        else cout << 1 << " "; 
    }
    return 0;
}

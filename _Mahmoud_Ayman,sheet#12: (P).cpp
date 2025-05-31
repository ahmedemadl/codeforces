//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-05-30 15:44:42
// Description : Full Training
// Problem Code: 
// Problem Name: P_Reverse_and_Remove
// Learned     : minimize everything
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int a1=0 , a2=0;
    for(int i = 0, j= n-1 ; i < k ; i++ ,j--){

        if(s[i] == 'a'){
            a1++;
        }
        if(s[j] == 'a'){
            a2++;
        }
    }
    
    if((a1 % 2 == 0 && a2 % 2 !=0 ) || (a1 % 2 != 0 && a2 % 2 == 0)){
    reverse(s.begin(),s.end());
    }

    for(int i = k; i < n-k ; i++){ 
        cout << s[i];
    }
    return 0;
}

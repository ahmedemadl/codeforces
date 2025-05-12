//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-05-11 18:56:59
// Description : full training 
// Problem Code: 
// Problem Name: A_Guess_the_Number
// Learned     : Interactive Problems
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long
string ask(ll mid){
    cout << mid << endl;
    cout.flush();
    string ch;
    cin >> ch;
    return ch;
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int l=1,r=1e6,mid,ans=1;
    while(l<=r){
        mid= (l+r)/2;
        string a = ask(mid);
        if(a == ">="){
            ans=mid;
            l= mid+1;
            
        }
        else{
            r=mid-1;
        }

    }
    cout << "! "<< ans ;
    

    return 0;
}

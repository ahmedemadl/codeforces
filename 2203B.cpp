//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-02-25 16:50:27
// Problem Name: B_Beautiful_Numbers
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
       ll x;cin >> x;
       ll sum=0;
       vector<int> v;
       while(x>0){     
            sum+= x%10;
            if(x < 10) x--;
            v.push_back(x%10);            
            x/=10;
       }
       sort(v.rbegin(),v.rend());
       int count=0;
       for(int i = 0;i< v.size();i++){
            if(sum <=9){
                break;
            }else{
                sum-= v[i];
                count++;;
            }
       }
       cout <<count << '\n';
    }
    return 0;
}

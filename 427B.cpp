#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
     ll n,t,c;
     cin >> n >> t >> c;

     vector<int>arr(n);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     
     ll l=0 , ans= 0;

     for(int i = 0; i<n ; i++){  
        
        if(arr[i] > t){
          l=i+1;
        }

        if(i-l+1 >= c){
            ans++;
        }
     }
     cout<<ans;
    }

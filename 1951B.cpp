//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-30 10:56:37
// Problem Name: B_Battle_Cows
// Note        : something all you need is a clear mind
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n, k;cin >> n >> k;
        vector<int> v(n);
        for(int i = 0 ;i < n;i++){
            cin >> v[i];
        }

        int mx1 = n-1;
  
        for(int i = 0 ;i < n;i++){
            if(v[i] > v[k-1]){
                mx1= i;
                break;
            }
        }    

        
        // scen 1
        int count1= 0;
        vector<int> test = v;
        swap(test[0], test[k-1]);
        for(int i = 1;i < n;i++){
            if(test[i] > test[0]){
                break;
            }
            count1++;
        }

        int count2= 0;
        // scen 2
        if(k-1 > mx1){ 
        if(mx1 > 0)count2++;
        int cur = v[k-1];
        swap(v[mx1] , v[k-1]);
        
        for(int i = mx1 + 1; i< n;i++){
            if(v[i] > cur){
                break;
            }else{
                count2++;
            }            
        }
        }
        cout << max(count1 ,  count2) << '\n';

    }
    return 0;
}

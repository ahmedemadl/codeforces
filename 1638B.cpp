//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-11-13 23:50:06
// Problem Name: B_Odd_Swap_Sort
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n; cin>> n;
        vector<int> even,odd;
        for(int i = 0 ;i < n; i++){
            int num;cin >> num;
            if(num %2 ==0){
                even.push_back(num);
            }else{
                odd.push_back(num);
            }
        }
        bool valid =1;
        for(int i =  1 ; i < even.size() ; i ++){
            if(even[i] < even[i-1]){
                valid = 0;
                break;
            }
        }

        for(int i =  1 ; i < odd.size() ; i ++){
            if(odd[i] < odd[i-1]){
                valid = 0;
                break;
            }
        }
        if(valid)cout <<"Yes" << '\n';
        else cout << "No" << '\n';
    }
    return 0;
}

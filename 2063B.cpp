//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-11-14 11:16:12
// Problem Name: B_Subsequence_Update
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n, l, r;cin >> n >> l >> r;
        int diff = r - l +1;
        vector<int> one, two;
        for(int i = 0 ;i < n; i++){
            int num; cin >> num;
            if(i+1 <= r){
                one.push_back(num);
            }
            if(i+1 >= l){
                two.push_back(num);
            }
        }
        
        sort(one.begin(), one.end());
        sort(two.begin(), two.end());
        
        ll sum1 = 0, sum2=0;
        for(int i = 0 ;i < diff ; i++){
            sum1+= one[i];
        }
        for(int i = 0 ; i < diff ; i++){
            sum2+= two[i];
        }

        cout << min(sum1,sum2) << '\n';
    }
    return 0;
}

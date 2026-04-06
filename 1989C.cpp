//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-27 07:47:14
// Problem Name: C_Two_Movies
// Note        : beeeeee carful, the most small detail matters
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;

        vector<int> a(n), b(n);
        for(int i = 0 ;i < n ;i++){
             cin >> a[i];
        }
        for(int i = 0 ;i < n ;i++){
            cin >> b[i];
        }
        int a_sum=0, b_sum=0, pos=0, neg=0;
        for(int i = 0 ;i < n;i++){
            if(a[i] > b[i]){
                a_sum += a[i];
            }else if(a[i] < b[i]){
                b_sum += b[i];
            }else{
                if(a[i] == 1)pos++;
                else if(a[i] == -1)neg++;
            }
        }
        while(pos--){
            if(a_sum < b_sum) a_sum++;
            else b_sum++;
        }
        while(neg--){
            if(a_sum > b_sum) a_sum--;
            else b_sum--;
        }
        
        cout << min(a_sum, b_sum) << '\n';
    }
    return 0;
}

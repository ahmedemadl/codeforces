//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-10-15 23:40:05
// Problem Name: A_Cut_the_Array
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        int ans_l = 0, ans_r = 0;
        for(int i = 0 ;i < n; i++) cin >> arr[i];
        
        for(int l = 0 ;l < n-1 ;l++){
            for(int r = l+1 ; r < n; r++){
                int s1=0, s2 =0, s3 =0;
                for(int i = 0 ;i <= l ; i++){
                    s1+= arr[i];
                }
                for(int i = l+1 ; i <= r ; i++){
                    s2+= arr[i];
                }
                for(int i = r+1 ; i < n ; i++){
                    s3+= arr[i];
                }
                s1 = s1%3;
                s2 = s2%3;
                s3 = s3%3;
                if(s1==s2  && s2==s3){
                    ans_l = l+1;
                    ans_r = r+1;
                }
                else if(s1 != s2 && s1 != s3 && s2 != s3){
                    ans_l = l+1;
                    ans_r = r+1;
                }
                if(ans_l != 0 && ans_r != 0)break;
            }
            if(ans_l != 0 && ans_r != 0)break;
        }
        cout << ans_l << " " << ans_r << '\n';

    }
    return 0;
}

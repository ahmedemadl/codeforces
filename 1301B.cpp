//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-02-19 21:59:34
// Problem Name: B_Motarack_s_Birthday
// Note        : 
//=====================================================
/*
| .       . 
|  .     .
|   .   . 
|     . 
|_________________
Bitonic ,find the local minimum
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int> arr(n);
        for(int &it : arr)cin >> it;
        auto get = [&](int k){
            vector<int> v=arr;
            int mx =0;
            for(int i = 0 ;i < n-1;i++){
                if(v[i] == -1) v[i] = k;
                if(v[i+1] == -1) v[i+1] = k;
                mx = max(abs(v[i] - v[i+1]), mx);
            }
            return mx;
        };

	    int left=0, right=1e9, mid, ans=-1;
        while(left<=right){
	        mid =left +(right-left)/2;
	        if(get(mid) <= get(mid+1) && get(mid) <= get(mid-1)){
                ans=mid;
                break;
            }
            else if(get(mid) < get(mid-1)){
                left =mid+1;
            }else if(get(mid) < get(mid+1)){
                right = mid-1;
            }
	    }
        cout << get(ans) << " " << ans <<'\n';
    }
    return 0;
}

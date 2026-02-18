//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-02-18 09:02:09
// Problem Name: C_Limited_Repainting
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n, k;cin >> n >> k;
        string s;cin >> s;
        int cost[n];
        for(int &it : cost)cin >> it;
        auto can = [&](int ans){
            int count = k;
            for(int i = 0 ;i < n;i++){
                // start a segment 
                if(s[i] == 'B' && cost[i] > ans){
                    count--;
                    while (i != n && ((s[i] == 'R' && cost[i] <= ans)  || (s[i] == 'B'))  )i++; 
                }
                
            }
            return count > -1;
        };
        int l=0, r=1e9, mid, ans=0;
        while(l<=r){
            mid = l + (r-l)/2;
            if(can(mid)){
                r=mid-1;
                ans= mid;
            }else{
                l=mid+1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
/*
B R


we are minimize the maximum and so we assume a the maximum and
check if it works and binary search it to get the minimum answer
if the choosen is 5 that means:
int count = k;
if(B > 5){
we mast take it in the segment 
}
when close if(if(s[i] == R and cost is > ans))

*/

//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-12-25 19:59:35
// Problem Name: B_Vika_and_the_Bridge
// Note        :
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n, m;cin >> n >> m;
        vector<vector<int>> v(m+1); // diff
        vector<int> arr(m+1);
        set<int> st;
        for(int i = 0;i < n;i++){
            int num;cin >> num;
            if(!st.count(num)){
                arr[num]=i; // put the pos of the 
                int diff = i;
                v[num].push_back(diff);
                st.insert(num);
            }else{
                // find the diff and push it to the v
                int diff = i - arr[num] -1;

                v[num].push_back(diff);
                arr[num]=i;
            } 
        }
        // find the diff from last pos to the end of the brige 
        for(int i = 1 ;i <= m ; i ++){
            int diff= n - arr[i] -1;
             v[i].push_back(diff);
        }
        int ans = INT_MAX;
        // find the mini max 
        for(auto x : v){
            vector<int> z=x;
            if(z.size() == 0){
                continue;
            }
            sort(z.begin(),z.end());
            int f = z[z.size()-1] / 2;
            int s = z[z.size() -2];
            int choose = max(f,s);
            ans = min(ans, choose);
            
        }
        cout << ans << '\n';

    }
    return 0;
    /*
    ///////////////////////////////////////////////////
    /                       يارب                      /
    ///////////////////////////////////////////////////
    */
}

//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-02-24 00:09:30
// Problem Name: C_Hamburgers
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);

        string s;cin >> s;
        ll nb,ns,nc; cin >> nb >> ns >> nc;
        ll pb,ps,pc; cin >> pb >>ps >> pc;
        ll rubles;cin >> rubles;
        ll B_cost=0, S_cost=0, C_cost=0; // the cost for a sandwitch
        for(int i = 0 ;i < s.size();i ++){
            if(s[i] == 'B')B_cost++;
            if(s[i] == 'S')S_cost++;
            if(s[i] == 'C')C_cost++;
        }
        auto can = [&](ll x){
            ll total_cost_B = max(B_cost*x - nb, 0LL) *pb;
            if(total_cost_B > rubles)return false;
            ll total_cost_C = max(C_cost*x - nc, 0LL) *pc;
            if(total_cost_C > rubles)return false;
            ll total_cost_S = max(S_cost*x - ns, 0LL) *ps;
            if(total_cost_S > rubles)return false;
            ll cost = total_cost_S+total_cost_C+total_cost_B;

            return cost <= rubles;
        };
        // what is the maximum?

        ll l=0, r=1e13,mid, ans;
        while(l<=r){
            mid= l + (r-l)/2;
            if(can(mid)){
                ans=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        } 
        cout << ans << '\n';

    return 0;
}

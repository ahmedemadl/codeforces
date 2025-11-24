    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-11-22 16:46:34
    // Problem Name: B_Incinerate
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    bool func(pair<ll,ll > a, pair<ll, ll> b){
        return a.second < b.second;
    }
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            ll n, k;cin >> n >> k;
            vector<pair<ll,ll>> v(n);
            for(int i = 0 ;i < n ;i++){
                ll a;cin >> a;
                v[i].first=a;
            }
            for(int i = 0 ;i < n ;i++){
                ll b;cin >> b;
                v[i].second= b;
            }
            sort(v.begin(), v.end(), func);
           
            bool alive= 1;
            ll T_damage =0;
            ll a = 0;
            while(true){
                v[a].first-= k;
                T_damage += k;
                while(v[a].first <= 0){
                    a++;
                    if(a == n) break;
                    v[a].first -= T_damage;
                }
     
                if(a == n){
                    alive = 0;
                    break;
                }
                k-= v[a].second;
                if(k <= 0){
                    break;
                } 
                 
            }   
     
            if(!alive)cout << "YES"<<'\n';
            else cout << "NO"<<'\n';
     
        }
        return 0;
    }

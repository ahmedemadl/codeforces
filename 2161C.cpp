    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-10-30 20:37:51
    // Problem Name: C_Loyalty
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            ll n, x; cin >> n >> x;
            ll s = 0, bouns= 0;
     
            deque<ll> dq(n);
            for(int i = 0 ; i < n;i++){
                cin>> dq[i];
            }
            sort(dq.begin(),dq.end());
            vector<ll> ans;
           while(!dq.empty()){
            if(s + dq.back() >= x){
                s += dq.back();
                bouns+= dq.back();
                ans.push_back(dq.back());
                dq.pop_back();
            }
            else{
                s += dq.front();
                ans.push_back(dq.front());
                dq.pop_front();
            }
            s = s % x;
           } 
     
           cout << bouns << '\n'; 
           for(int x : ans){
            cout << x << " ";
           }
           cout << '\n';
        }
        return 0;
    }

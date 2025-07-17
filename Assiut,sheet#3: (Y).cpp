    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-03 18:14:09
    // Problem Name: Y_Range_sum_query
    // Learned     : Prefix Sum
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n,q;cin >> n>>q;
        ll Prefix[n];
        int num;
        cin>> Prefix[0];
     
        for(int i = 1 ; i < n; i++){
            cin>>num;
            Prefix[i]= Prefix[i-1]+num;
        }
     
        for(int i = 0 ; i < q ; i++){
            int l,r;cin>>l>>r;
            l--;
            r--;
            ll ans;
            if(l == 0){
                ans = Prefix[r];
            }
            else{
                ans = Prefix[r] - Prefix[l-1]; 
            }
            cout << ans << endl;    
        }
     
        return 0;
    }

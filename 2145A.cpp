    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-10-08 13:16:07
    // Problem Name: A_Candies_for_Nephews
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t;cin>> t;
        while(t--){
        int n;cin >>n;
        // int ans=;
        if(n%3 == 0){
            cout << 0 << '\n';
        }
        else cout << ((n/3) +1) *3 -n << '\n';
     
        }
     
        return 0;
    }

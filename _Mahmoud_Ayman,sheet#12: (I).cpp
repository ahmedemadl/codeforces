    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-05-23 23:36:30
    // Description : Full Training Sheet V7.0
    // Problem Code: 
    // Problem Name: I_Increasing_Array
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n;cin>>n;
        int a[n];
        cin >> a[0];
        ll ans= 0;
        for(int i = 1 ; i < n; i++){
            cin >> a[i];
            if(a[i] < a[i-1]){
                ans+= a[i-1] - a[i];
                a[i] = a[i-1];
            }  
     
        }
        cout << ans;
     
     
        return 0;
    }

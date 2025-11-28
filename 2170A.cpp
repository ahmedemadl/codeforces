    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-11-28 16:39:40
    // Problem Name: A_Maximum_Neighborhood
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            int n;cin >> n;
            if(n > 2){
            int val1 =  (n*n) +((n*n) -1) + ((n*n)-2) + ((n*n) -n -1);
            // int val2 = ((n*n) -1) + ((n*n) -n -1) + ((n*n) -n) + ((n*n) -n -2) + ((n*n) - (2*n) -1);
            int val2 =  ((n*n) -1)  + ((n*n) -n -1)  + ((n*n) -n) +((n*n) -n -2)  +((n*n) - (2*n) -1);
            int ans = max(val1 , val2);
            cout << ans << '\n'; 
     
            }
            else if(n == 2)
            cout << 9 << '\n';
            else
            cout << 1 << '\n';
        }
        return 0;
    }

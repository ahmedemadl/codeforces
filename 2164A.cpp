    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-11-06 16:43:05
    // Problem Name: A_Sequence_Game
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
            int arr[n];
            int mx = INT_MIN;
            int mn = INT_MAX;
            for(int i = 0 ; i < n ;i++){
                int num;cin >> num;
                mx = max(mx, num);
                mn = min(mn, num);
            }
            int x ; cin >> x;
            if(mx >= x && mn <= x){
                cout <<"YES" << '\n';
            }
            else if(mx == x || mn == x){
                cout << "YES" << '\n';
            }else{
                cout << "NO" << '\n';
            }
             
     
     
        }
        return 0;
    }

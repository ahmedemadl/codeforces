    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-11-16 20:30:35
    // Problem Name: C_Cyclic_Merging
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
            int mx = 0;
            for(int i = 0 ; i < n; i++){
                cin >> arr[i];
                mx = max(mx, arr[i]);
            }
            ll count =0;
            for(int i = 0 ;i < n-1;i++){
                count+= max(arr[i],arr[i+1]);
            }
            // if(n % 2 != 0)
            count += max(arr[0], arr[n-1]);
            cout << count-mx << '\n';
        }
        return 0;
    }

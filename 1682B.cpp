    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-10-22 01:57:43
    // Problem Name: B_AND_Sorting
    // Note        : Bitmasks
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            int n;cin >>n;
            int arr[n], arr_sorted[n];
            for(int i = 0 ; i < n ; i++){
                cin >> arr[i];
                arr_sorted[i] = arr[i];
            }
            sort(arr_sorted, arr_sorted +n);
            vector<int> v;
            for(int i = 0 ;  i < n ; i++){
                if( arr[i] != arr_sorted[i]){
                    v.push_back(arr[i]);
                } 
            }
            int ans =v[0];
            for(int x : v){
                ans = ans & x;
            }
            cout << ans << '\n';
        }
        return 0;
    }

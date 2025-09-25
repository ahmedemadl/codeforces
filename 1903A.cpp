    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-09-23 12:43:44
    // Problem Name: I_Boxes
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            int n, k; cin >> n >> k;
            int arr[n];
            int sort_arr[n];
            for(int i = 0 ; i < n; i++){
                cin >> arr[i];
                sort_arr[i]= arr[i];
            }
            sort(sort_arr , sort_arr+n);
            bool flag = 1; // sorted
            for(int i = 0 ; i < n ; i++){
                if(arr[i] != sort_arr[i]){
                    flag =0 ;
                    break;
                }
            }
            if(k == 1){
                if(flag == 1){
                    cout << "YES" << '\n';
                }else{
                    cout << "NO" << '\n';
                }
            }else{
                cout << "YES" << '\n';
            }
     
        }
        return 0;
    }

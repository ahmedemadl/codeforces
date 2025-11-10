    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-11-10 17:09:12
    // Problem Name: A_Souvlaki_VS_Kalamaki
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
            for(int i = 0 ; i < n; i++){
                cin >> arr[i];
     
            }
            sort(arr,arr+n);
            bool valid = 1;
            for(int i = 1; i < n-1; i +=2){
                if(arr[i] < arr[i+1]){
                    valid = 0;
                    break;
                }
            }
            if(valid) cout << "YES" << '\n';
            else cout << "NO" << '\n';
     
        }
        return 0;
    }

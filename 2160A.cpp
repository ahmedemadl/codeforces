    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-10-12 17:43:25
    // Problem Name: A_MEX_Partition
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            int n; cin >> n;
            bool flag= 1;
            int arr[n];
            int freq[102]={0};
            for(int i = 0 ; i < n; i++){
                cin >> arr[i];
                freq[arr[i]]=1;
            }
            int ans;
            for(int i = 0 ; i <= 101 ; i ++){
                if(freq[i] == 0){
                    ans = i;
                    break;
                }
            }
            cout << ans << '\n';
     
     
        }
        return 0;
    }

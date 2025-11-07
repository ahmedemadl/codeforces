    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-11-06 16:57:31
    // Problem Name: B_Even_Modulo_Pair
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
            bool flag =0;
     
            for(int i =  n-1 ;i > 0; i--){
                for(int j = i-1  ;j >= 0 ; j--){
                    if((arr[i] % arr[j]) % 2 == 0){
                        flag =1;
                        cout << arr[j]  << " "<< arr[i];
                        break;
                    }                
                }
                if(flag)break;
            }
            if(!flag) cout << -1;
     
            cout << '\n';
     
        }
        return 0;
    }

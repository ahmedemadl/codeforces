    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-11-28 17:07:50
    // Problem Name: B_Addition_on_a_Segment
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            ll n;cin >> n;
            ll arr[n];
            ll sum=0;
            ll numbers=0;
            for(int i =  0 ;i < n;i  ++){
                cin >> arr[i];
                if(arr[i] > 0) numbers++;
                sum+= arr[i];
            }
            if(sum == n){
                cout << 1 << '\n';
            }else{
                if((sum - n +1) > numbers){
                    cout << numbers << '\n';
                }else{
                    cout << sum - n +1<< '\n'; 
                }
            }
        }
        return 0;
    }

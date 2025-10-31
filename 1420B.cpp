    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-10-30 06:25:58
    // Problem Name: R_Rock_and_Lever
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        short t; cin >> t;
       while(t--){
            int n;cin >> n;
            ll freq[32]={0}; 
            for(int i = 0 ; i < n ; i++){
                int num; cin >> num;
                int msb = floor(log2(num));
                freq[msb]++;
            }
            ll count= 0;
            for(int i = 0 ; i < 32; i ++){
                count+= freq[i] * (freq[i]-1) /2;
            }
            cout << count << '\n';
        }
        return 0;
    }

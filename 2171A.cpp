    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-11-20 16:37:09
    // Problem Name: A_Shizuku_Hoshikawa_and_Farm_Legs
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
            if(n % 2 != 0)cout << 0 << '\n';
            else cout << n/4 + 1<< '\n';
     
        }
        return 0;
    }

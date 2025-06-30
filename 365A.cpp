    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-20 15:59:03
    // Problem Name: F - Good Number
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n, k; cin >> n >> k;
        int count = 0;
        
        while (n--){
            bool flag = 1;
            string s ; cin >> s;
            for(int i = 0 ; i <= k; i++){
                if(s.find(i + '0') == -1) flag = 0; 
            }
            if(flag == 1) count ++;
        }
        cout << count;
     
        return 0;
    }

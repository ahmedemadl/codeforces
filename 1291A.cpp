    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-07-04 15:55:14
    // Problem Name: E - Even But Not Even
    // Learned     : even odd relation
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            int n; cin >> n;
            string s; cin >> s;
            string ans="";
            for(int i = 0 ; i < n ;i++){
                int num = s[i] - '0';
                if(num % 2 != 0){
                    ans+=s[i];
                }
                if(ans.length() == 2){
                    break;
                }
            }
            if(ans.length() == 2){
                cout << ans << '\n';
            }
            else{
                cout << "-1" << '\n';
            }
        }
     
        return 0;
    }

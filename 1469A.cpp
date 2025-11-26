    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-11-24 00:27:24
    // Problem Name: A_Regular_Bracket_Sequence
    // Note        : solve it your way , even if you are should it's not the optimal solution
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        int count =1;
        
        while(t--){
            string s;cin >> s;
            int count=0;
            for(int i = 0 ;i < s.size() ; i++){
                if(s[i] == '?'){
                    count++;
                }
            }
            if(s[0] == ')' || s[s.size() - 1] == '(' || count % 2 != 0){
                cout << "NO" << '\n';
            }else{
                cout << "YES" << '\n';
            }
        }
        return 0;
    }

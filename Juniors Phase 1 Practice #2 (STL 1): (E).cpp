    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-09-09 18:09:38
    // Description : ICPC Assiut University Training - Juniors Phase 1 Sheets-2022
    // Problem Code: 
    // Problem Name: E_Plug_in
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        string s; cin >> s;
        string ans;
        for(char ch : s){
            if(!ans.empty() && ans.back() == ch){
                ans.pop_back();
            }
            else{
                ans.push_back(ch);
            }
        }
        cout << ans;
     
        return 0;
    }

    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-09 03:03:43
    // Problem Name: S_Max_Split
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        string s;cin >> s;
        vector <string> ans;
        int L_count{}, R_count{};
        int range=0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'L'){
                L_count++;
            }
            else{
                R_count++;
            }
            if(L_count == R_count){
                string a="";
                for(int j = range ; j <= i ; j++){
                    a+= s[j];
                }
                ans.push_back(a);
                range=i+1;
            }
        }
        cout << ans.size() << '\n';
        for(int i = 0 ; i < ans.size() ; i++){
            cout << ans[i] << '\n';
        }
     
        return 0;
    }

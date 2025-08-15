    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-02-07 23:28:32
    // Description : Junior Training Sheet V7.0
    // Problem Code: 43B
    // Problem Name: B_Letter
    // Learned     : MAP
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        unordered_map<char, int> mp1;
        for(auto c : s1){
            if(c != ' '){
                mp1[c]++;
            }
        }
        for(auto c : s2){
            if(c != ' '){
                if(mp1[c] > 0){
                    mp1[c]--;
                }
                else{
                    cout << "NO";
                    return 0;
                }
            }
        }
        cout << "YES";
     
        return 0;
    }

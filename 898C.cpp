    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-12-25 04:11:55
    // Problem Name: C_Phone_Numbers
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    bool comp(string s1, string s2){
        return s1.size() > s2.size();
    }
    int main(){
        int n;cin >> n;
        map <string, vector<string>> mp;
        while(n--){
            string s;cin >> s;
            int k ;cin >> k;
            while(k--){
                string b;cin >> b;
                mp[s].push_back(b);
            }
        }
        // كده بالصلى عالنبي دخلت الداتا 
        cout << mp.size() << '\n';
        for(auto x : mp){
            cout << x.first << " ";
                vector<string> z;
                auto h = x.second;
                sort(h.begin(), h.end(), comp);
                for(auto y : h){
                    bool can = 1;
                    for(auto l : z){
                        if(equal(y.rbegin(), y.rend(), l.rbegin())){
                            can =0;
                        }
                    }
                    if(can){
                        z.push_back(y);
                    }                
                }
                cout << z.size() << " ";
                for(auto a : z){
                    cout << a << " ";
                }
                cout << '\n';
     
        }
     
        return 0;
    }

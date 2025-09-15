    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-04-25 21:16:23
    // Description : Junior Training Sheet V7.0
    // Problem Code: 313B
    // Problem Name: B_Ilya_and_Queries
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        string s;
        cin >> s;
        int n = s.length();
        int prefix[n+1]= {};
        for(int i = 0 ; i < n ; i++){
            if(s[i] == s[i+1]){
                prefix[i+1]=prefix[i]+1;
            }
            else{
                prefix[i+1]=prefix[i];
            }
        }
     
        int m;
        cin >> m;
        for(int i = 0 ; i < m ; i++){
            int l , r;
            cin >> l >> r;
            cout << prefix[r-1] - prefix[l-1] << endl;
        }
     
        return 0;
    }

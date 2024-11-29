    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-11-29 20:24:54
    // Description : Junior Training Sheet V7.0
    // Problem Code: 16A
    // Problem Name: A_Flag
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        
        int n , m;
        cin >> n >> m;
        string s, prev;
        bool check = 0;
        
     
        
        for (int i = 0 ; i < n ; i++){
            cin >> s;  
            for(int j = 0 ; j < m ; j++){
                if(s[j] != s[0]){
                    cout << "NO";
                    return 0;
                }
                if(check == 1){
                    if(s[j] == prev[j]){
                        cout << "NO";
                        return 0;
                    }
                }
            }
            prev = s;
            check = 1;
        }
     
        cout << "YES";
        return 0;
    }

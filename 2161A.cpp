    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-10-30 19:40:31
    // Problem Name: A_Round_Trip
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            int r,x,d, n;cin >> r >> x >> d >>n;
            string s; cin >> s;
            int count = 0;
            for(int i = 0 ; i < s.size() ; i++){
                if(s[i]== '1'){
                    
                    if(r-d < 0){
                        r = 0;
                    }
                    else{
                        
                        r = r -d;
                    }
                    count++;
                    
                }else if(s[i] == '2' && r < x){
                    if(r-d < 0){
                        r = 0;
                    }else{
                        r = r -d;
                    }
                    count++;
                }
            }
            cout << count << '\n';
        }
        return 0;
    }

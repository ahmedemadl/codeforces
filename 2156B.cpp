    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-10-24 18:00:59
    // Problem Name: B_Strange_Machine
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            int n,q;cin >>n  >> q;
            string s;cin >> s;
            bool flag = 0;
            if(s.find('B') == -1)flag=1;
            // ll big_num =1;
            // for(int i = n-2 ; i >=0 ; i--){
            //     if(s[i] == 'A'){
            //         big_num++;
            //     }else{
            //         big_num*=2;
            //     }
            // }
     
            while(q--){
                ll a; cin >> a;
                ll ans =0;
                int i = 0;
                if(flag){
                    cout << a << '\n';
                }else{
                while(a > 0){
                    if(i == n){
                        i=0;
                    }
     
                    if(s[i] == 'A'){
                        a--;
                    }else{
                        a/=2;
                    }
                    i++;
                    ans++;
                }
                cout << ans << '\n';
                }    
     
            }
     
        }
        return 0;
    }

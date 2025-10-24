    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-10-24 17:51:34
    // Problem Name: A_Pizza_Time
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            int n;cin >> n;
            int count =0;
            while(n > 2){
                if(n %3 ==0){
                    count+=n/3;
                    n/=3;
                }else{
                    count+= n/3;
                    n = n/3 + n%3;
                }
            }
            cout << count << '\n';
        }
        return 0;
    }

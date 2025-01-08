    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-01-08 22:55:19
    // Description : Junior Training Sheet V7.0
    // Problem Code: 149A
    // Problem Name: A_Business_trip
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int k, ans = 0, months[12];
        cin >> k;
        for(int i = 0; i < 12 ; i++){
            cin >> months[i];
        }
        sort(months, months + 12, greater<int>());
        for(int i = 0; i < 12 ; i++){
            
            if(k <= 0){
                cout << i ;
                return 0;
            }
            k -= months[i];
        }
        if(k <= 0){
                cout << 12;
                return 0;
            }
        cout << -1;
     
        return 0;
    }

    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-10-05 19:45:39
    // Problem Name: A_El_fucho
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            int n;  cin >> n;
            int win = n;
            int total=0;
            int loser=0;
            while(win > 1){
                total+= win/2;
                loser+= win/2;
                
                win= (win+1)/2;
            }
            while(loser > 1){
                total+=loser/2;
                loser= (loser+1) /2;
            }
            cout << total+1 << '\n';
     
        }
        return 0;
    }

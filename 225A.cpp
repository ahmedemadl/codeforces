    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-07-15 01:58:29
    // Problem Name: K_Dice_Tower
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n; cin >> n;
        int x; cin >> x;
        int y = 7-x;
     
        while(n--){
            int a, b; cin >> a >> b;
            if( a == x || a == 7-x || b == x || b == 7-x){
                cout << "NO"<< '\n';
                return 0;
            }
        }   
        cout << "YES";
     
        return 0;
    }

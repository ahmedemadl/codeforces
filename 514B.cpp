    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-08-18 17:13:59
    // Description : Junior Training Sheet V7.0
    // Problem Code: 514B
    // Problem Name: B_Han_Solo_and_Lazer_Gun
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n, x2, y2, x1, y1 ;
        bool vertical = false;
        cin >> n >> x2 >> y2;
        set<pair<int, int>> vec;
        for (int i = 0 ; i < n ; i++){
            cin >> x1 >> y1;
            int dy = (y2-y1);
            int dx = (x2-x1);
            if (dx == 0){
                vertical = true;
            }
            else{
                // Normalize the slope using GCD
                int g = gcd(abs(dy), abs(dx));
                dy /= g;
                dx /= g;
                
                // Normalize the slope direction
                if (dx < 0) {
                    dy = -dy;
                    dx = -dx;
                }
                vec.insert({dy,dx});
            }
            
        }
        
      
        cout << vec.size() + vertical ;
        return 0;
    }

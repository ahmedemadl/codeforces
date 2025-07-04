    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-15 11:42:52
    // Problem Name: X_Rectangle
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        double x1,y1,x2,y2,x3,y3,x4,y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        double min_x = min({x1,x2,x3,x4});
        double max_x = max({x1,x2,x3,x4});
        double min_y = min({y1,y2,y3,y4});
        double max_y = max({y1,y2,y3,y4});
     
        short N; cin >> N;
        while(N--){
            double x, y;
            cin >> x >> y;
            if(x >= min_x && x <= max_x && y >= min_y && y <= max_y){
                cout << "YES" << '\n';
            }
            else{
                cout << "NO" << '\n';
            }
        }
        return 0;
    }

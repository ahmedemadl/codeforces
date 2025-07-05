    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-15 15:00:35
    // Problem Name: Y_Common_Area
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int T; cin >> T;
        int Case = 1;
        while(T--){
            int N; cin >> N;
     
            int maxi_x1= INT_MIN;
            int mini_x2 =INT_MAX;
            int maxi_y1 =INT_MIN; 
            int mini_y2 =INT_MAX;
            
            while(N--){
                int x1,y1,x2,y2;
                cin >> x1 >> y1 >> x2 >> y2;
                maxi_x1 = max(x1, maxi_x1);
                mini_x2 = min(x2, mini_x2); 
                maxi_y1 = max(y1, maxi_y1);
                mini_y2 = min(y2, mini_y2);
                
            }
            int area = (mini_x2-maxi_x1) * (mini_y2-maxi_y1);
            if ((mini_x2-maxi_x1) <= 0 || mini_y2-maxi_y1 <= 0){
                area =0;
            }
            cout << "Case #"<<Case<<": "<< area << endl;
            Case++;
        }
     
        return 0;
    }

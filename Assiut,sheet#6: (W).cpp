    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-15 09:13:04
    // Problem Name: W_Circles
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        double x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        // calculate the centers of circles and the distance between the two centers  
        // calculate the two radius of the two circles
        // compare the distance with the sum of two radius 
        // cout <<(dis > sum ) ? "NO" : "YES";
           
        double c1_x = (x2+x1)/2;
        double c1_y = (y2+y1)/2;
        double c2_x = (x4+x3)/2;
        double c2_y = (y4+y3)/2;
        
        double R1 = sqrt(pow((x1-c1_x), 2) + pow((y1-c1_y) ,2));
        double R2 = sqrt(pow((x3-c2_x), 2) + pow((y3-c2_y) ,2));
        double dis= sqrt(pow((c2_x-c1_x), 2) + pow((c2_y-c1_y) ,2));
        double sum = R1 + R2;
        
        cout << ((dis > sum) ? "NO" : "YES");
        return 0;
    }


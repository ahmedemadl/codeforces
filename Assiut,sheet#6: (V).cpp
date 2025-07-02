    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-14 18:32:17
    // Problem Name: V_Two_Lines
    // Learned     : Using Slop and avoiding common Errors
    //               1- dividing by zero 2- Precision/rounding errors 3- Floating Point Comparisons
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        double x1, y1, x2, y2,x3 ,y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        double dx1 = (x2 - x1);
        double dy1 = (y2 - y1);
        double dx2 = (x4 - x3);
        double dy2 = (y4 - y3);
     
        
        if(dy1 * dx2 == dx1 * dy2){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        return 0;
    }

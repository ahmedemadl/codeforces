    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-09-02 08:24:29
    // Description : Junior Training Sheet V7.0
    // Problem Code: 141B
    // Problem Name: B_Hopscotch
    // Learned     : if else متلازمة
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        double a;
        double x, y;
        cin >> a >> x >> y;
        //we focus on y first 
        y/= a;
        //check if y is on the edge
        if (y == static_cast<int>(y)) {
            cout << "-1";
            return 0;
        }
        if (y > 1){
        int pos = 1;
        for(int i = 1 ; i < ceil(y-1) ; i++ ){
            if(i %2 != 0){
                pos ++;
            }
            else{
                pos += 2;
            }
        }
        if (static_cast<int>(ceil(y)) % 2 == 0){
            pos ++;
            if ( abs(x) < a/2 ){
            cout << pos;
            return 0;
            }
            else{
            cout <<"-1";
            return 0;
            }
        }
        else{
            if ( x == 0 ){
                cout << "-1";
                return 0;
            }
            else if ( x < 0){
             
                cout <<  ((abs(x) < a )? pos+1: -1);
                return 0;
           
            }
            else if ( x > 0){
                
                cout << ((x < a)?  pos+2 : -1);
                return 0;
            }
            }
        
        }
        else {
            cout << ((abs(x) < a/2) ? 1 : -1);
            return 0; 
        }
        return 0;
    }

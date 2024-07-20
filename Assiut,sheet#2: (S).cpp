//=====================================================
// Author      : ahmedgbr367
// Date        : 20/7/2024
// Description : Assiut,sheet#2: (S).cpp
// Problem Type: loop
// Problem No. : 219432
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int x , y, sum = 0;
      cin >> x >> y;
      int a = max(x,y);
      int b = min(x,y);
        for(int i = b+1 ; i < a ; i++ ){
          if ( i %2 != 0){
            sum += i;
        
      }
    }
    cout << sum << endl;
    }
    return 0;
}

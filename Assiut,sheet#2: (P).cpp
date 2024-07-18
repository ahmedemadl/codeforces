//=====================================================
// Author      : ahmedgbr367
// Date        : 18/7/2024
// Description : Assiut,sheet#2: (H)
// Problem Type: 
// Problem No. : 219432
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    for(int i = n ; i > 0 ; i --){
      for (int j = 0 ; j < i ; j++){
        cout << "*";
      }
      cout << endl;
    }
    return 0;
}

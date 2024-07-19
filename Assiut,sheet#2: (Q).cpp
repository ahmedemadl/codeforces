//=====================================================
// Author      : ahmedgbr367
// Date        : 19/7/2024
// Description : Assiut,sheet#2: (Q)
// Problem Type: 
// Problem No. : 219432
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    string s;
    cin >> n ;
    for(int i = 0 ; i < n ; i ++){
      cin >> s;
      for (int j = s.length()-1 ; j >= 0 ; j--){
        cout << s[j] << " ";
      }
      cout << endl;
    }
    return 0;
}

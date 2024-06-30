    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 30/6/2024
    // Description : Junior Training Sheet V7.0
    // Problem Type: A
    // Problem No. : 514
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
      string s;
      cin >> s;
     
      for (int i = 0; i < s.length() ; i++) {
        char c = s[i];      // get the each character
        int num = c - '0';  // convert character to integer
        if (num > 4) {
          if (i==0 && num == 9 ){
            cout << num;
          }
          else{
          num =9-num;
          cout << num;
          }
        } else {
          cout << num;
        }
      }
     
      return 0;
    }

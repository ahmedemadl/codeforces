    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 5/7/2024
    // Description : Junior Training Sheet V7.0
    // Problem Type: A
    // Problem No. : 298
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
      int n, s1, t;
      bool check = 0, find_L = 0, right = 0;
      string s;
      cin >> n >> s;
      set<char> unique_characters;
      for (char c : s) {
        if (c == 'R') {
          right = 1;
        }
        unique_characters.insert(c);  // Insert each character into the set
      }
     
      if (unique_characters.size() == 2) {
        if (right == 1) {
          for (int i = 0; i < n; i++) {
            if (s[i] == 'R' && check == 0) {
              s1 = i + 1;
              check = 1;
            } else if (s[i] == '.' && check == 1) {
              t = i + 1;
              break;
            }
          }
     
        } else {
          for (int i = 0; i < n; i++) {
            if (s[i] == 'L' && check == 0) {
              t = i;
              check = 1;
            } else if (s[i] == '.' && check == 1) {
              s1 = i;
              break;
            }
          }
        }
      } else {
        for (int i = 0; i < n; i++) {
          if (s[i] == 'R' && check == 0) {
            s1 = (i + 1);
            check = 1;
          } else if (s[i] == 'L') {
            t = (i);
            find_L = 1;
            break;
          }
        }
      }
     
      cout << s1 << " " << t;
     
      return 0;
    }

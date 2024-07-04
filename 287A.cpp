//=====================================================
// Author      : ahmedgbr367
// Date        : 4/7/2024
// Description : Junior Training Sheet V7.0
// Problem Type: A
// Problem No. : 287
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
  char a[4][4];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      if (a[i][j] == a[i][j + 1]) {
        if ((a[i][j] == a[i + 1][j]) || (a[i][j] == a[i + 1][j + 1])) {
          cout << "YES";
          return 0;
        }
      }
    }
  }
    for (int i = 3; i > 0; i--) {
    for (int j = 3; j > 0; j--) {
      if (a[i][j] == a[i][j - 1]) {
        if ((a[i][j] == a[i - 1][j]) || (a[i][j] == a[i - 1][j - 1])) {
          cout << "YES";
          return 0;
        }
      }
    }
  }
  cout << "NO";

  return 0;
}

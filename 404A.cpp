// مسألة تكفير مع انها سهلة
//اوسخ كود كتبته في حياتي
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  char x[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> x[i][j];
    }
  }
 
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (i == j) {
        if (x[i][j] != x[i + 1][j + 1]) {
          cout << "NO";
          return 0;
        }
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j && i + j != n - 1) {
        if (x[i][j] != x[1][0]) {
          cout << "NO";
          return 0;
        }
          if (x[i][j] == x[0][0]) {
          cout << "NO";
          return 0;
        }
        
      } else if ((i + j) == n - 1 && i != j) {
        if (x[i][j] != x[0][0]) {
          cout << "NO";
          return 0;
        }
      }
    }
  }
 
  cout << "YES";
 
  return 0;
}

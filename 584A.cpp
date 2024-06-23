#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, t;
  cin >> n >> t;
  if (t < 10) {
    for (int i = 0; i < n; i++) {
      cout << t;
    }
  } else if (t == 10) {
    if (n != 1) {
      for (int i = 0; i < n; i++) {
        if (i == n - 1) {
          cout << "0";
        } else {
          cout << "1";
        }
      }
    } else {
      cout << "-1";
    }
  }
 
  return 0;
}

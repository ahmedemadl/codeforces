#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 2; i <= n; i++) {
    bool ch = 0;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        ch = 1;
      }
    }

    if (ch == 0) {
      cout << i << " ";
    }
  }
  return 0;
}

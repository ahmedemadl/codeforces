#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, prime;
  cin >> n >> m;

  for (int i = n + 1; i < 50; i++) {
    int check = 0;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        check = 1;
        break;
      }
    }
    if (check == 0) {
      prime = i;
      i = 50;
    }
  }

  cout << ((prime == m) ? "YES" : "NO");
  return 0;
}

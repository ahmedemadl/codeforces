//=====================================================
// Author      : ahmedgbr367
// Date        : 29/6/2024
// Description : Junior Training Sheet V7.0
// Problem Type: A
// Problem No. : 682
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, m, pair = 0;
  cin >> n >> m;
  if (n <= m) {
    for (int i = 1; i <= n; i++) {
      pair += (((i + m) / 5) - (i / 5));
    }
  } else {
    for (int i = 1; i <= m; i++) {
      pair += (((i + n) / 5) - (i / 5));
    }
  }

  cout << pair;
  return 0;
}

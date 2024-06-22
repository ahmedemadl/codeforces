#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, count = 0;
  cin >> n;
  int x[n];
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  sort(x, x + n);
  for (int i = 0; i < n; i++) {
    if (x[i] == x[0]) {
      count++;
    } else if (x[i] == x[n - 1]) {
      count++;
    }
  }
  cout << n - count;
  return 0;
}

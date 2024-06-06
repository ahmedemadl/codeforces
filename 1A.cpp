// Online C++ compiler to run C++ program online

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  int x1;
  cin >> n;
  int x[n];
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  for (int i = 0; i < 100; i++) {
    for (int i = 0; i < n; i++) {
      if (i != n - 1) {
        if (x[i] > x[i + 1]) {
          x1 = x[i + 1];
          x[i + 1] = x[i + 1] + (x[i] - x[i + 1]);
          x[i] = x[i] - (x[i] - x1);
        }
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << x[i] << " ";
  }
}

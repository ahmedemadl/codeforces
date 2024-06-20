#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  double x[n];
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  sort(x, x + n);
 
  for (int i = 0; i < n; i++) {
    int max;
    int min;
 
    if (i == 0) {
      min = abs(x[i] - x[i + 1]);
      max = abs(x[i] - x[n - 1]);
 
    } else if (i == n - 1) {
      min = abs(x[i] - x[n - 2]);
      max = abs(x[i] - x[0]);
    } else {
      if (abs(x[i] - x[n - 1]) > abs(x[i] - x[0])) {
        max = abs(x[i] - x[n - 1]);
      } else {
        max = abs(x[i] - x[0]);
      }
      if (abs(x[i] - x[i - 1]) < abs(x[i] - x[i + 1])) {
        min = abs(x[i] - x[i - 1]);
      } else {
        min = abs(x[i] - x[i + 1]);
      }
    }
 
    cout << min << " " << max << endl;
  }
  return 0;
}
Explain

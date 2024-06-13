#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int n;
  cin >> n;
  int x[n];
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  int m;
  cin >> m;
  int y[m][2];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> y[i][j];
    }
  }
  for (int i = 0; i < m; i++) {
    if ((y[i][0]) < n) {
      x[y[i][0]] += ((x[y[i][0] - 1]) - (y[i][1]));  // the lower wire
    }
    if (y[i][0] - 2 >= 0) {
      x[(y[i][0] - 2)] += ((y[i][1]) - 1);  // the upper wire
    }
    x[y[i][0] - 1] = 0;
  }
  for (int i = 0; i < n; i++) {
    cout << x[i] << endl;
  }
 
  return 0;
}

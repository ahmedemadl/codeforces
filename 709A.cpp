#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int n;
  double b, d;
  cin >> n >> b >> d;
  long long x[n], max = 0, finalvalue = 0;
  for (int i = 0; i < n; i++) {
    cin >> x[i];
    if (x[i] > b) {
      x[i] = 0;
    }
  }
 
  for (int i = 0; i < n; i++) {
    max += x[i];
    if (max > d) {
      finalvalue++;
      max = 0;
    }
  }
 
  cout << finalvalue;
  return 0;
}

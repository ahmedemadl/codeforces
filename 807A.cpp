#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n], b[n], k[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  for (int i = 0; i < n; i++) {
    if (a[i] != b[i]) {
      cout << "rated";
      return 0;
    }
  }
  for (int i = 0; i < n; i++) {
    k[i] = a[i];
  }
  // Sort the array in descending order using std::sort with std::greater
  sort(a, a + n, greater<int>());

  for (int i = 0; i < n; i++) {
    if (k[i] != a[i]) {
      cout << "unrated";
      return 0;
    }
  }
  cout << "maybe";
  return 0;
}

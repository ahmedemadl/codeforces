//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-07-05 18:21:33
// Description : Junior Training Sheet V7.0
// Problem Code: 66B
// Problem Name: B_Petya_and_Countryside
// Learned     :
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n, maximum = 0, f_maximum = 0;
  cin >> n;
  int x[n];
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  for (int i = 0; i < n; i++) {
    int i_a = i, i_b = i;
    maximum = 0;
    while (x[i_a] >= x[i_a - 1] && i_a - 1 >= 0) {
      maximum++;
      i_a -= 1;
    }
    while (x[i_b] >= x[i_b + 1] && i_b + 1 <= n - 1) {
      maximum++;
      i_b += 1;
    }
    if (maximum > f_maximum) {
      f_maximum = maximum;
    }
  }
  cout << f_maximum + 1;

  return 0;
}

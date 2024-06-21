#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, num;
  cin >> n;
  int freq[n+1]{0}, max{n};
  for (int i = 0; i < n; i++) {
    cin >> num;
    freq[num] = 1;

    while (freq[max]) {
      cout << max << " ";
      max--;
    }
    cout << endl;
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, t;
  char letter;
  cin >> n >> m;
  t = n * m;
  for (int i = 0; i < t; i++) {
    cin >> letter;
    if (letter == 'C') {
      cout << "#Color";
      return 0;
    }
    if (letter == 'Y') {
      cout << "#Color";
      return 0;
    }
    if (letter == 'M') {
      cout << "#Color";
      return 0;
    }
  }
  cout << "#Black&White";
  return 0;
}

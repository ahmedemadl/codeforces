#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, str1_score = 0, str2_score = 0;
  cin >> n;
  string str, str1, str2;
  cin >> str1;
  for (int i = 1; i < n; i++) {
    cin >> str;
    if (str == str1) {
      str1_score++;
    } else {
      str2 = str;
      str2_score++;
    }
  }
  if (str2_score > str1_score) {
    cout << str2;
  } else {
    cout << str1;
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  string word;
  cin >> word;
  int check = 0, started = 0;
  for (int i = 0; i < word.length(); i++) {
    if (word[i] == 'W' && word[i + 1] == 'U' && word[i + 2] == 'B') {
      i += 2;
      if (started == 1) {
        check = 1;
      }

    } else {
      started = 1;
      if (check == 1) {
        cout << " ";
        check = 0;
      }
      cout << word[i];
    }
  }
  return 0;
}

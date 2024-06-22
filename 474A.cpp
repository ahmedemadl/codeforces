#include <bits/stdc++.h>
using namespace std;

int main() {
  string word;
  vector<char> keyboard = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i',
                           'o', 'p', 'a', 's', 'd', 'f', 'g', 'h',
                           'j', 'k', 'l', ';', 'z', 'x', 'c', 'v',
                           'b', 'n', 'm', ',', '.', '/', ';'};

  char dis;
  int Destination;
  cin >> dis;
  if (dis == 'R') {
    Destination = -1;
  } else if (dis == 'L') {
    Destination = 1;
  }
  cin >> word;

  for (int i = 0; i < word.length(); i++) {
    int count = 0;
    for (int j = 0; j < 33; j++) {
      if (word[i] == keyboard[j]) {
        cout << keyboard[j + Destination];
        count++;
      }
      if (count == 1) {
        j = 33;
      }
    }
  }

  return 0;
}

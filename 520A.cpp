#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string input;
  char alphabet[26];
  int frq_alphabet[26] = {0};
  cin >> n >> input;
  // Convert all letters to lowercase using std::transform and std::tolower
  transform(input.begin(), input.end(), input.begin(),
            [](unsigned char c) { return tolower(c); });
  // make array of all the alphabet

  for (int i = 0; i < 26; i++) {
    alphabet[i] = 'a' + i;
  }
  for (int i = 0; i < n; i++) {
    int check = 0;
    for (int j = 0; j < 26; j++) {
      if (input[i] == alphabet[j]) {
        frq_alphabet[j]++;
        break;
      }
    }
  }
  for (int i = 0; i < 26; i++) {
    if (frq_alphabet[i] == 0) {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";
  return 0;
}

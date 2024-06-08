// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
  string word;
  int uppercase_count = 0, lowercase_count = 0;
  // first we got the word as an input
  cin >> word;
  // then we count the number of the upper and lower case letters of the word
  for (char c : word) {
    if (isupper(c)) {
      uppercase_count++;
    } else if (islower(c)) {
      lowercase_count++;
    }
  }
  // turn the word to all upper or lower case
  if (uppercase_count > lowercase_count) {
    for (char &c : word) {
      c = toupper(c);
    }
  } else {
    for (char &c : word) {
      c = tolower(c);
    }
  }
 
  cout << word;
  return 0;
}

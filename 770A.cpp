#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  char alphabet[k];

  for (int i = 0; i < k; ++i) {
    alphabet[i] = 'a' + i;
  }

  for (int i = 0, j = 0; i < n; i++) {
    if (j < k) {
      cout << alphabet[j];
      j++;
    } else {
      j = 0;
      cout << alphabet[j];
      j++;
    }
  }

  return 0;
}

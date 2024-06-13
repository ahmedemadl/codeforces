#include <bits/stdc++.h>
using namespace std;

int main() {
  int counter = 0;

  int x[4];

  for (int i = 0; i < 4; i++) {
    cin >> x[i];
  }

  // Create an unordered_map to store the frequency of each element
  unordered_map<int, int> frequency;

  // Count the frequency of each element
  for (int num : x) {
    frequency[num]++;
  }

  for (const auto &pair : frequency) {
    if (pair.second > 1) {
      counter += pair.second - 1;
    }
  }

  cout << counter;
  return 0;
}

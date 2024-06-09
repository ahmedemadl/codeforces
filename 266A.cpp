#include <iostream>
using namespace std;
 
int main() {
  int n, counter = 0;
  string input;
  cin >> n;
  cin >> input;
  // compare each letter with it's previous
  for (int i = 0; i < n; i++) {
    if (input[i] == input[i - 1]) {
      counter++;
    }
  }
 
  cout << counter;
 
  return 0;
}

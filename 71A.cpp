#include <iostream>
#include <set>  // For set
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i <= n; i++) {
    string input;
    int count = 0;
    // Read the entire line of input
    getline(cin, input);

    for (char ch : input) {
      count++;
    }
    if (count <= 10) {
      cout << input << endl;
    } else {
      cout << input[0] << count - 2 << input[count - 1] << endl;
    }
  }
  return 0;
}

#include <iostream>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  int x[n];
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
 
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i + 1 == x[j]) {
        cout << j + 1 << " ";
        break;
      }
    }
  }
  return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int n, counter = 0;
  cin >> n;
  int h[n], a[n];
  for (int i = 0; i < n; i++) {
    cin >> h[i] >> a[i];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (h[i] == a[j]) {
        counter++;
      }
    }
  }
  cout << counter;
  return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int n;
  int m;
  cin >> n;
  int x[n], k = 0;
  int sereja = 0, Dima = 0;
 
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  // m is the value of n without changes
  m = n;
 
  for (int j = 0; j < m; j++) {
    if (j % 2 == 0) {
      if (x[k] > x[n - 1]) {
        sereja = sereja + x[k];
        k++;
      } else {
        sereja = sereja + x[n - 1];
        n -= 1;
      }
    }
 
    else {
      if (x[k] > x[n - 1]) {
        Dima = Dima + x[k];
        k++;
      } else {
        Dima = Dima + x[n - 1];
        n -= 1;
      }
    }
  }
  cout << sereja << " " << Dima;
 
  return 0;
}

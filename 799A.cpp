// Online C++ compiler to run C++ program online
#include <cmath>
#include <iostream>
using namespace std;
int main() {
  double n, t, k, d, a, b, n_rounds, g;
  cin >> n >> t >> k >> d;
  n_rounds = ceil(n / k);
  a = (t * n_rounds);
  g = ceil((n_rounds - (d / t)) / 2);
  b = (d) + (t * g);
 
  if (b >= a) {
    cout << "NO";
  } else if (a > b) {
    cout << "YES";
  }
 
  return 0;
}

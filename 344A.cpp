// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  long long n;
  cin >> n;
  long long x[n], y[n], counter = 1;
  for (long long i = 0; i < n; i++) {
    cin >> x[i];
    if (i != 0 && x[i] != x[i - 1]) {
      counter++;
    }
  }
  cout << counter;
 
  return 0;
}

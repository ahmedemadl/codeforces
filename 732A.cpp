// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int k;
  short r;
  cin >> k >> r;
  for (int n = 1; n <= 1000; n++) {
    int k_changing, kr;
    k_changing = k * n;
    kr = k_changing - r;
    if (k_changing % 10 == 0) {
      cout << n;
      return 0;
    } else if (kr % 10 == 0) {
      cout << n;
      return 0;
    }
  }

  return 0;
}

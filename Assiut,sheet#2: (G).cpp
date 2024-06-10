// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
    for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    long long f = 1;
    for (int j = 1; j <= x; j++) {
      f *= j;
    }
    cout << f << endl;
  }
  return 0;
}

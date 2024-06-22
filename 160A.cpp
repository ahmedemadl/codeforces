#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, sum = 0, avg, my_money = 0;
  cin >> n;
  int x[n];
  for (int i = 0; i < n; i++) {
    cin >> x[i];
    sum += x[i];
  }
  avg = sum / 2;

  // Sort the array in descending order using std::sort with std::greater
  sort(x, x + n, greater<int>());

  for (int i = 0; i < n; i++) {
    my_money += x[i];
    if (my_money > avg) {
      cout << i + 1;
      return 0;
    }
  }
}

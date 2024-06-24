#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, a, b, num;
  cin >> n >> a;
  int frq_array[n];
  for (int i = 0; i < a; i++) {
    cin >> num;
    frq_array[num - 1] = 1;
  }
  cin >> b;
  for (int i = 0; i < b; i++) {
    cin >> num;
    frq_array[num - 1] = 1;
  }
  for (int i = 0; i < n; i++) {
    if (frq_array[i] != 1) {
      cout << "Oh, my keyboard!";
      return 0;
    }
  }
  cout << "I become the guy.";
  return 0;
}

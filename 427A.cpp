// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int n, crimes = 0, officers = 0, untreated_crimes = 0;
  cin >> n;
 
  int x[n];
  for (int i = 0; i < n; i++) {
    cin >> x[i];
    if (x[i] == -1) {
      crimes++;
    } else {
      officers += x[i];
    }
    if (crimes > officers) {
      untreated_crimes++;
      crimes -= 1;
    }
  }
  cout << untreated_crimes;
 
  return 0;
}

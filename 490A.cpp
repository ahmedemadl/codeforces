#include <algorithm>  // For std::min
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  int x[n];
  // Vectors to store indices of 1s, 2s, and 3s
  vector<int> location_array1;
  vector<int> location_array2;
  vector<int> location_array3;

  for (int i = 0; i < n; i++) {
    cin >> x[i];
    if (x[i] == 1) {
      location_array1.push_back(i + 1);

    } else if (x[i] == 2) {
      location_array2.push_back(i + 1);

    } else {
      location_array3.push_back(i + 1);
    }
  }
  // Find the minimum of the three integers
  int w = min(location_array1.size(),
              min(location_array2.size(), location_array3.size()));
  cout << w << endl;

  for (int i = 0; i < w; i++) {
    cout << location_array1[i] << " " << location_array2[i] << " "
         << location_array3[i] << endl;
  }
  return 0;
}

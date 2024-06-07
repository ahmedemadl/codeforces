// Online C++ compiler to run C++ program online
#include <cctype>  // For std::toupper
#include <iostream>

using namespace std;

int main() {
  string l1;
  string l2;
  cin >> l1;
  cin >> l2;
  for (char &c : l1) {
    c = tolower(c);
  }
  for (char &c : l2) {
    c = tolower(c);
  }

  int result = l1.compare(l2);
  if (result > 0) {
    cout << "1";
  } else if (result < 0) {
    cout << "-1";
  } else {
    cout << "0";
  }
  return 0;
}

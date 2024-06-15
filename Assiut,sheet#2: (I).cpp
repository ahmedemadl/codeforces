// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  string s;
  cin >> s;
  int counter = 0;
  bool check =0;
  int length = s.length();
 
  for (int i = 0, j = length - 1; i < length && j >= 0; i++, j--) {
    if (s[j] != '0') {
      check = 1;
    }
    if (s[j] == '0' && check == 0) {
      continue;
    }
    cout << s[j];
 
    if (s[i] != s[j]) {
      counter += 1;
    }
  }
  cout << endl;
  if (counter == 0) {
    cout << "YES";
 
  } else {
    cout << "NO";
  }
}

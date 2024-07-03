//=====================================================
// Author      : ahmedgbr367
// Date        : 3/7/2024
// Description : Junior Training Sheet V7.0
// Problem Type: A
// Problem No. : 382
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, s2;
  cin >> s >> s2;
  int cal;
  bool flage = 0;
  vector<char> a;
  vector<char> b;
  vector<char> f;
  for (char c : s) {
    if (c == '|') {
      flage = 1;
      continue;
    }
    if (flage == 0) {
      a.push_back(c);
    } else {
      b.push_back(c);
    }
  }

  for (char c : s2) {
    f.push_back(c);
  }

  int asize = a.size();
  int bsize = b.size();
  int fsize = f.size();
  if (abs(asize - bsize) <= f.size()) {
    if ((a.size() + b.size() + f.size()) % 2 == 0) {
      for (int i = 0; i < f.size(); i++) {
        if (a.size() < b.size()) {
          a.push_back(f[i]);
        } else {
          b.push_back(f[i]);
        }
      }
    } else {
      cout << "Impossible";
      return 0;
    }

  } else {
    cout << "Impossible";
    return 0;
  }

  for (char c : a) {
    cout << c;
  }
  cout << "|";
  for (char c : b) {
    cout << c;
  }
}

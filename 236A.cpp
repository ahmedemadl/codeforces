// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
  string result;
  string input;
  set<char> unique_letters;
  cin >> input;
  int n;

  for (char c : input) {
    if (unique_letters.find(c) == unique_letters.end()) {
      unique_letters.insert(c);
      result += c;
      n++;
    }
  }

  if (n % 2 == 0) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }

  return 0;
}

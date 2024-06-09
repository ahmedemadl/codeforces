// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int a1, a2, a3, a4, caloris = 0;
  string input;
 
  // to get the 4 strips
  cin >> a1 >> a2 >> a3 >> a4;
 
  // to get the string input
  cin >> input;
 
  // to determine the length of the string
  int length = input.length();
 
  int* intArray = new int[length];  // Allocate memory for the integer array
 
  // Convert each character to an integer and store it in the array "very
  // important"
  for (int i = 0; i < length; ++i) {
    intArray[i] = input[i] - '0';  // Convert char to int
  }
  for (int i = 0; i < length; i++) {
    if (intArray[i] == 1) {
      caloris += a1;
 
    } else if (intArray[i] == 2) {
      caloris += a2;
    } else if (intArray[i] == 3) {
      caloris += a3;
    } else {
      caloris += a4;
    }
  }
  cout << caloris;
 
 
  return 0;
}

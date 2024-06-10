// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  string input;
  int total_moves = 0;
  int start_s = 0;  // 'a'
  cin >> input;
  // to determine the length of the string
  int length = input.length();
  // m is a brillint ideal, it's the solution to keep the location of j apdated
  for (int i = 0; i < length; i++) {
    int index = input[i] - 97;  // to make a=0 ,...., z=15 ascii code
    int walk =
        abs(start_s - index);  //(a-m(0-12)=12 & (m-a)(12-0)=12 & (a-p)(0-15)=15
    if (walk < 13) {           //(16/2=13)
      total_moves += walk;
    } else {
      total_moves += 26 - walk;  // (26-15 =11)  || (26-13=13)
    }
    start_s = index;  // to start when i finish
  }
  cout << total_moves;

  return 0;
}

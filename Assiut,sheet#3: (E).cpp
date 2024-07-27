#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, num , pos;
  int lowest = INT_MAX;
  cin >> n;
  for(int i = 0 ; i < n ; i++){
    cin >> num;
    if (num < lowest){
      lowest = num;
      pos = i+1;
    }
  }
  cout << lowest << " " << pos;
    return 0;
}

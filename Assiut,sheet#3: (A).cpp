#include <iostream>
 
using namespace std;

int main(){
  int n , num ;
  long long sum =0 ; 
  cin >> n;
  for (int i = 0 ; i < n ; i++){
    cin >> num ;
    sum += num;
  }
  long long final_sum = abs(sum);
  cout << final_sum;
}

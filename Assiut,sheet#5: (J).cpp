#include <bits/stdc++.h>
using namespace std;

void AvergeMean(double x[],int n){
  double total_num = 0;
  for (int i = 0 ; i < n; i++){
    total_num += x[i];
  }
   cout << fixed << setprecision(7) << total_num/n;
}
int main(){
  int n;
  
  cin >> n;
  double x[n];
  for(int i = 0 ; i < n ; i++){
    cin >> x[i];
  }
  AvergeMean(x, n);
  
    return 0;
}

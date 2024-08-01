#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int>x(n);
  
  for (int i = 0 ; i < n ; i ++){
    cin >> x[i];
  }
    
  sort(x.begin() , x.end());
  
   for (int i = 0 ; i < n ; i ++){
    cout << x[i] << " ";
  }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
bool PrimeNumber(int a){
  
  if (a <= 1) return false;  // Handle cases where n <= 1
   
  for (int i = 2; i * i <= a; i++){
    if(a % i == 0){
      return false;
    }
  }
  return true;
  
}
int main(){
    int t, n;
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        cin >> n;
        
        if (PrimeNumber(n)){
          cout << "YES" << endl;
        }
        else{
          cout << "NO" << endl;
        }
    }
    return 0;
}

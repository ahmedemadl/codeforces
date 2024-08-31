#include <bits/stdc++.h>
using namespace std;

void FindMinMax(int x[],int n , int& maximum,int& minimum){
  maximum = INT_MIN;
    minimum = INT_MAX;
  for (int i = 0 ; i < n ; i++){

 
   
    maximum = max(maximum, x[i]);
    minimum = min(minimum, x[i]);
    
  }

}
int main(){
  int n;
  cin >> n;
  int x[n];
  for (int i = 0 ; i < n ; i++){
    
    cin >> x[i];
    
  }
  int maximum = INT_MIN, minimum = INT_MAX;
  
  FindMinMax(x, n, maximum, minimum);
  
  cout << minimum << " " << maximum;
    
    return 0;
}

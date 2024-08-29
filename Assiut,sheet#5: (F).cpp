#include <bits/stdc++.h>
using namespace std;

void equation(int x,int n){
  long long S = 0;
  for(int i = 2 ; i <= n;i+=2){
    long long num = 1;
    for (int j = 1 ; j <= i ;j++){
      num *= x;
    }
    S += num;
  }
  cout << S;
}
int main(){
    int X,N;
    cin >> X >> N;
    equation(X,N);
  
    return 0;
}

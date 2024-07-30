#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n];
    for (int i = 0 ; i < n , cin >> x[i] ; i++){}
    for (int i = 0 , j = n-1 ; i < n , j >=0 ;i++,j--){
      if (x[i] != x[j]){
      cout<< "NO"; 
      return 0;
      }
    }
    cout << "YES"; 
    return 0;
}

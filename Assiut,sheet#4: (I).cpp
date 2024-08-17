#include <bits/stdc++.h>
using namespace std;
  
int main(){
  cin.tie(0)->sync_with_stdio(0);
  string s ;
  cin >> s;
  for (int i = 0 , j = s.length()-1 ; i < s.length(), j >= 0 ; i++ , j--){
    if (s[i] != s[j]){
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}

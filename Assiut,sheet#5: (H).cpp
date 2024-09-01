#include <bits/stdc++.h>
using namespace std;
void PrintCharacter(int n ,char s){
  for (int i = 0 ; i < n ; i++){
    cout << s;
    if (i != n-1){
      cout << " ";
    }
  }
  cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
      int n;
      char s;
      cin >> n >> s;
     PrintCharacter(n, s);
    }
    return 0;
}

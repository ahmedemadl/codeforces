#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t ;
    while (t--){
      string s1,s2;
      cin >> s1 >> s2;
      int small = min(s1.length(),s2.length());
      int big = max(s1.length(),s2.length());
      for (int i = 0 ; i < small ; i++){
        cout << s1[i] << s2[i];
      }
      
      for (int i = small ; i < big ; i++){
        if (s1.length() > s2.length()){
          cout << s1[i];
        }
        else {
          cout << s2[i];
        }
      }
      cout << endl;
    }
    
    
    return 0;
}

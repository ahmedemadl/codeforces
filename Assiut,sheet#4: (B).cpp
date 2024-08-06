#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin , s);
    for (int i =0 ; i < s.length(); i++){
      if (s[i] != '\\'){
        cout << s[i];
      }
      else{
        return 0;
      }
    }
    return 0;
}

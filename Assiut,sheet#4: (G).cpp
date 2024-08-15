#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for (int i = 0 ; i < s.length() ; i++){
       // Check if character is lowercase
      if (islower(s[i])) {
          s[i] = toupper(s[i]);
      }
      // Check if character is uppercase
      else if (isupper(s[i])) {
          s[i] = tolower(s[i]);
      }
      if ( s[i] == ','){
        cout << " ";
      }
      else {
        cout << s[i];
      }
    }
    return 0;
}

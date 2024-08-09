#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1 , s2;
    cin >> s1 >> s2;
    cout << s1.length() << " "<< s2.length() << endl << s1 << s2 << endl << s2[0] ;
    for (int i = 1 ; i < s1.length(); i++){
      cout << s1[i];
    }
    cout << " "<< s1[0];
    for (int i = 1 ; i < s2.length() ; i++){
      cout << s2[i];
    }
    return 0;
}

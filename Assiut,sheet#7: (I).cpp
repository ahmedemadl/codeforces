#include <bits/stdc++.h>
using namespace std;
int Recursion(string s, int n, int count){

    if(n == -1){ // Base case 
        return count;
    }

    if(s[n] == 'a' || s[n] == 'A' ||  s[n] == 'e' ||  s[n] == 'E' ||  s[n] == 'i' || s[n] == 'I' || s[n] == 'o' || s[n] == 'O' || s[n] == 'u' || s[n] == 'U'){
        count ++;
    }

    return Recursion(s, n-1, count);

}
int main(){
    string s;
    getline(cin, s);
    
    int n = s.length() - 1;
    int answer = Recursion(s, n, 0);
    cout << answer;

}

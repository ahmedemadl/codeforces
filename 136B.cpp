#include <bits/stdc++.h>
using namespace std;
#define ll long long
/// I understand nothing thank you
int main(){
 
    int a, b, c, p;
    cin >> a >> c;
    b = 0;
    p = 1;
 
    while (a || c){
        b += ((c % 3 - a % 3 + 3) % 3) * p;
        p *= 3;
        a /= 3;
        c /= 3;
    }
 
    cout << b ;
 
}

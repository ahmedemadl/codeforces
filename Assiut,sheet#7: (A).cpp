#include <bits/stdc++.h>
using namespace std;
void Recursion(int n){
    if( n == 0 ){
        return;
    }
    cout << "I love Recursion" << endl;
    return Recursion(n-1); 
}

int main(){
    int n;
    cin >> n;

    Recursion(n);
    return 0;
}

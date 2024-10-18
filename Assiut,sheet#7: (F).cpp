#include <bits/stdc++.h>
using namespace std;
void Recursion(int x[],short i, short n){
    
    if (i >= n){
        return;
    }
    Recursion(x, i+2, n);
    cout << x[i] << " ";
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    short n;
    cin >> n;

    int x[n];
    for (int i = 0; i < n ; i++){
        cin >> x[i];
    }

    Recursion(x, 0, n);

    return 0;
}

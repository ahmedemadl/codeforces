#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll Recursion(int x[], int m){
    if(m == -1){
        return 0;
    }

    return x[m] + Recursion(x, m-1);
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m, num, j = 0;
    cin >> n >> m;
    int x[m];

    for(int i = 0; i < n-m ; i++){
        cin >> num;
    }

    for(int j = 0 ; j < m ; j++){
        cin >> x[j];
    }

    cout << Recursion(x, m-1);
    return 0;
}

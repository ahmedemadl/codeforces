#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, k;
    cin >> n >> k;
    vector<int> robots(n); 

    for(int i = 0; i < n; i++){ 
        cin >> robots[i];
    }

    ll num = 0;
    for(int i = 1; i <= n; i++){
        num += i;
        if(num >= k){
            cout << robots[k - (num - i) - 1];
            return 0;
        }
    }
    return 0;
}

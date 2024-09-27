//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-09-27 20:22:54
// Description : Junior Training Sheet V7.0
// Problem Code: 158A
// Problem Name: A_Next_Round
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, k, num, count = 0;
    cin >> n >> k;
    int x[n];

    for(int i = 0 ; i < n ; i++){
        cin >> x[i];
      
    }

    for (int i = 0 ; i < n; i ++){
        if(x[i] > 0 && x[i] >= x[k-1]){
            count ++;
        }
    }
    cout << count;
    return 0;
}

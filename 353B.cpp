//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-07-11 05:58:01
// Description : Junior Training Sheet V7.0
// Problem Code: 353B
// Problem Name: B_Fence
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n ,k,output,min; 
    cin >> n >> k;
    min = numeric_limits<int>::max();
    int x[n+1];
    // one based for prefix sum implementation
    x[0]=0;
    for (int i =1 ;i< n+1 ; i++){
        cin >> x[i];
        x[i]= x[i]+x[i-1];
    }
    for (int i = 1; i <= n+1-k ; i++){
        if (min > (x[i+k-1]-x[i-1]) ){
            min = x[i+k-1]-x[i-1];
            output = i;
        }
        ;

    }
    cout << output;

    return 0;
}

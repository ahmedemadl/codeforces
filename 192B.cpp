//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-11-21 23:21:34
// Description : Junior Training Sheet V7.0
// Problem Code: 192B
// Problem Name: B_Walking_in_the_Rain
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, answer, current;
    cin >> n;
    int x[n];
    for (int i = 0 ; i < n ; i++){
        cin >> x[i];
    }
    answer = min(x[0], x[n-1]);
    for(int i = 1 ; i < n; i++){
        current = max(x[i], x[i-1]);
        answer = min(answer,current);
    }
    cout << answer;
    return 0;
}

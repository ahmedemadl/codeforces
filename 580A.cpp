//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-12-20 23:29:08
// Description : Junior Training Sheet V7.0
// Problem Code: 580A
// Problem Name: A_Kefa_and_First_Steps
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,m,num , ans = 0, count = 1;
    cin >> n;
    cin >> m;
    for(int i = 0 ; i < n-1; i++){
        cin >> num;
        if(num >= m){
            count ++;
        }
        else{
            ans = max(ans, count);
            count = 1;
        }
        m = num;
    }
    ans = max(ans, count);
    cout << ans;

    return 0;
}

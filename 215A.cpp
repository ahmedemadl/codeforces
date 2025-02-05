//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-02-05 23:21:29
// Description : Junior Training Sheet V7.0
// Problem Code: 215A
// Problem Name: A_Bicycle_Chain
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m,max = 0, ans = 0, num;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i]; 
    }

    cin >> m;
    int b[m];
    for(int i = 0 ; i < m ; i++){
        cin >> b[i]; 
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(b[j] % a[i] == 0){
                num = b[j] / a[i];
                if(num == max){
                    ans++;
                }
                else if(num > max){
                    ans = 1;
                    max = num;
                    
                }
            }
        }
    }
    cout << ans;
    return 0;
}

//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-03 16:52:28
// Description : Junior Training Sheet V7.0
// Problem Code: 
// Problem Name: U_Is_B_a_subsequence_of_A
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,m;cin>>n>>m;
    int a[n];
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    int x, o=0;
    for(int i = 0 ; i < m ; i++){
        cin >>x;
        bool flag=0;
        for(int j = o ; j < n; j++){
            
            if(x == a[j]){
                flag=1;
                o=j+1;    
                break;
            }              
        }
        if(flag == 0){
            cout << "NO"; 
            return 0;
        }
    }
    cout << "YES";
    return 0;
}

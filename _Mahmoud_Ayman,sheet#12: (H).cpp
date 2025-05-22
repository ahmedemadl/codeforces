//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-05-22 20:22:32
// Description : Full Training
// Problem Code: 
// Problem Name: H_Increasing
// Learned     : set
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    
    int t ;cin >> t;
    while(t--){
        int n,num; cin>>n;
        set <int> a;
        
        for(int i = 0; i < n; i++){
            cin >> num;
            a.insert(num);
            
        }
        if(a.size() == n){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO"<< '\n';
        }
    }

    return 0;
}

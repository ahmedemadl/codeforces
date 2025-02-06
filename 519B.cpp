//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-02-06 23:23:47
// Description : Junior Training Sheet V7.0
// Problem Code: 519B
// Problem Name: B_A_and_B_and_Compilation_Errors
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> a(n), b(n-1), c(n-2);
    int num, num1, num2;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for(int i = 0 ; i < n-1 ; i++){
        cin >> b[i];
    }
    sort(b.begin(), b.end());

    for(int i = 0 ; i < n-2 ; i++){
        cin >> c[i];
    }
    sort(c.begin(), c.end());
    a.push_back(0);
    b.push_back(0);
    for(int i = 0 ; i < n ; i++){
        if(a[i] != b[i]){
            num1 = a[i];
            a.erase(a.begin() + i);
            break;
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(a[i] != c[i]){
            num2 = a[i];
            break;
        }
    }




    cout << num1 << endl << num2;
    return 0;
}

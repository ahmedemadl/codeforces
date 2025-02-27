//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-02-27 23:24:39
// Description : Junior Training Sheet V7.0
// Problem Code: 667B
// Problem Name: B_Coat_of_Anticubism
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n ; 
    cin >> n;
    vector <int> vec(n);
    for(int i = 0 ; i < n ; i++){
        cin >> vec[i];
    }

    sort(vec.begin(),vec.end());
    long long sum=0;
    for(int i = 0 ; i < n-1 ; i++){
        sum+= vec[i];
    }
    long long z = vec[n-1] - sum + 1;

    cout << z;
    return 0;
}

//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-02-03 22:56:22
// Description : Junior Training Sheet V7.0
// Problem Code: 732B
// Problem Name: B_Cormen_The_Best_Friend_Of_a_Man
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, k, num,added_days = 0;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n ; i++){
        cin >>arr[i];
    }
    for(int i = 1; i < n ; i++){
        num = arr[i] + arr[i-1];
        if(num < k){
            arr[i] += k - num;
            added_days += k - num;
        }
    }
    cout << added_days << endl;
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

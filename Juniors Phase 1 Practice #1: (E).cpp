//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-09-08 12:57:00
// Description : ICPC Assiut University Training - Juniors Phase 1 Sheets-2022
// Problem Name: E_Sereja_and_Suffixes
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int freq[100001] = {0};

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m; cin >> n >> m;
    int arr[n];
    int count = 0;
    for(int i = 0 ; i < n ; i ++){
        cin >> arr[i];
            freq[arr[i]]++;
        if(freq[arr[i]] == 1) count++;
    }
    int ans[n];
    for(int i = 0 ; i < n ; i++){

        ans[i] = count;
        freq[arr[i]]--;
        if(freq[arr[i]] == 0) count--; 
    }
    for(int i = 0 ;  i < m; i++){
        int l ; cin >> l;
        cout << ans[l - 1] << '\n';
    }
    return 0;
}

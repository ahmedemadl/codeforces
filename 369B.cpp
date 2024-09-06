//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-09-06 06:08:40
// Description : Junior Training Sheet V7.0
// Problem Code: 369B
// Problem Name: B_Valera_and_Contest
// Learned     : the simple  Distribution technique
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, k, l, r, S_all, S_k;
    cin >> n >> k >> l >> r >> S_all >> S_k;
    
    vector <int> a(n);
    for (int i = 0 ; i < k ; i++){
        a[i] += S_k/k; 
    }
    for (int i = 0 ; i < S_k % k ; i++){
        a[i]++;
    }
    int remaining_points = S_all - S_k;
    int remaining_student = n - k;
    if (remaining_student > 0){
        for (int i = k ; i < n ; i++){
            a[i] += remaining_points / remaining_student;
        }
        for (int i = k ; i < k + remaining_points % remaining_student ; i++){
            a[i]++;
        }
    }


    for (int i = 0 ; i < n ; i++){
        cout << a[i] << " ";
    }
    
    return 0;
}

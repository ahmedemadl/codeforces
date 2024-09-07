//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-09-07 11:01:31
// Description : Junior Training Sheet V7.0
// Problem Code: 550B
// Problem Name: B_Preparing_Olympiad
// Learned     : Bitmask
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, l, r, x, count = 0;
    cin >> n >> l >> r >> x;
    vector <int> arr(n);
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int total_subsets = 1 << n; // 2^n

    for (int i = 0 ; i < total_subsets ; i++){
        long long sum = 0;
        int easiest = INT_MAX;
        int hardest = 0;
        int the_size_of_problemset = 0;
        for(int j = 0 ; j < n ; j++){
            if ( i & (1 << j)){
            sum += arr[j];
            easiest = min(easiest, arr[j]);
            hardest = max(hardest, arr[j]);
            the_size_of_problemset ++;
            }
        }

        int diff = hardest - easiest; 
        if (sum >= l && sum <= r && diff >= x && the_size_of_problemset >= 2){
            count++;
        }
    }
    cout << count;

    return 0;
}

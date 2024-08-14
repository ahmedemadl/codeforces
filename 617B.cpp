//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-08-14 15:30:02
// Description : Junior Training Sheet V7.0
// Problem Code: 617B
// Problem Name: B_Chocolate
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    long long result = 0;
    int prev =-1;
    for (int i = 0 ; i < n ; i++){
        int num;
        cin >> num;
               if (num == 1) {
            if (prev == -1) {
                result = 1;
            } else {
                result *= i - prev;
            }
            prev = i;
        }
    }
    cout << result;
    return 0;
}

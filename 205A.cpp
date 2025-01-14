//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-14 22:28:37
// Description : Junior Training Sheet V7.0
// Problem Code: 205A
// Problem Name: A_Little_Elephant_and_Rozdil
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, num, ans = INT_MAX, output;
    unordered_map<int, int> x;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> num;
        if(x[num] == 0){
            x[num] = 1;
        } else {
            x[num]++;
        }
        
        if( ans > num){
            ans = num;
            output = i + 1;
        }

    }
    if (x[ans] > 1) {
        cout << "Still Rozdil";
    } else {
        cout << output;
    }

    

    return 0;
}

//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-11-15 23:38:32
// Problem Name: E_1_Permutation_Minimization_by_Deque
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        int arr[n];
        deque<int> dq;
        int num; cin >> num;
        dq.push_back(num);
        for(int i = 1; i < n; i++){
            int num;cin >> num;
            if(dq.front() > num){
                dq.push_front(num);
            }else{
                dq.push_back(num);
            }
        }
        for(int n : dq){
            cout << n << " ";
        }
        cout << '\n';
    }
    return 0;
}

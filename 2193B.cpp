//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-01-25 16:47:30
// Problem Name: B_Reverse_a_Permutation
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n; cin >>n;
   
        vector<int> arr(n),a_sorted(n);
        for(int i = 0 ;i < n;i++){
            cin >> arr[i];
            a_sorted[i]= arr[i];
        } 
        sort(a_sorted.rbegin(),a_sorted.rend());
        if(arr == a_sorted){
            for(int x : arr){
                cout << x << " ";
            }
            cout << '\n';
            continue;
        }
        int st=-1, end=0;
        for(int i =0; i < n;i++){
            if(arr[i] != a_sorted[i] && st==-1){
                st = i;
            }
            if(st != -1 && a_sorted[st] == arr[i]){
                end = i;
                break;
            } 
        }
        for(int i = 0 ;i < st;i++){
            cout << arr[i] <<" ";
        }
        for(int i = end ; i >= st; i--){
            cout << arr[i] << " ";
        }
        for(int i = end + 1; i < n;i++){
            cout << arr[i] << " ";
        }

        cout << '\n';
    }
    return 0;
}

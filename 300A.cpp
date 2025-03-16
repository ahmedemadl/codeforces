//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-28 21:54:08
// Description : Junior Training Sheet V7.0
// Problem Code: 300A
// Problem Name: A_Array
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    vector<ll> arr(n), third , first , second;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    bool check = 1;
    for (int i = 0 ; i < n ; i++){
        
        if(arr[i] <= 0){
            if( check == 1 && arr[i] < 0){
            second.push_back(arr[i]);
            check =0;
            }
            else{
                    third.push_back(arr[i]);
            }
        }
        else{
            first.push_back(arr[i]);
        }
    }
    cout << second.size()<< " ";
    for(auto i : second){
        cout << i << " ";
    }
    cout << endl << first.size()<< " ";
    for(auto i : first){
        cout << i << " ";
    }
    cout << endl << third.size() << " ";
    for(auto i : third){
        cout << i << " ";
    }

    return 0;
}

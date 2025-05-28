//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-05-27 23:20:53
// Description : Junior Training Sheet V7.0
// Problem Code: 433B
// Problem Name: L_Odd_Even_Increments
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--){
        int n; cin >>n;
        vector <int> arr1, arr2;
        for(int i = 0; i < n; i++){
            int num ;
            cin >> num;
            if(i % 2 == 0){
                arr1.push_back(num);
            }
            else{
                arr2.push_back(num); 
            }

        }
        bool flag = 0;
        
        if(arr1[0] % 2 == 0 ){
            for(int i = 1 ; i < arr1.size() ; i++){
                if(arr1[i] % 2 != 0){
                    cout << "NO" << endl; flag = 1;  break;
                }
            }
        }
        else{
            for(int i = 1 ; i < arr1.size() ; i++){
                if(arr1[i] % 2 == 0){
                    cout << "NO" << endl;  flag = 1;  break;
                }
            }
        }
        if(flag == 0){
        if(arr2[0] % 2 == 0 ){
            for(int i = 1 ; i < arr2.size() ; i++){
                if(arr2[i] % 2 != 0){
                    cout << "NO" << endl;  flag = 1; break;
                }
            }
        }
        else{
            for(int i = 1 ; i < arr2.size() ; i++){
                if(arr2[i] % 2 == 0){
                    cout << "NO" << endl; flag= 1;  break;
                }
            }
        }
        }

        if(flag == 0){
            cout << "YES" << endl;
        }

    }

    return 0;
}

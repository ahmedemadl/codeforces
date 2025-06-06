    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-05 00:38:37
    // Problem Name: N_Shift_Zeros
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    vector<int> myfunction(int arr[], int n){
        int zeros = 0;
        vector <int> v;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] != 0){
                v.push_back(arr[i]);
            }
            else{
                zeros++;
            }
        }
        while(zeros--){
            v.push_back(0);
        }
        return v;
    }
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
     
        vector<int> v = myfunction(arr,n);
     
        for(auto c : v){
            cout << c << " ";
        }
     
        return 0;
    }

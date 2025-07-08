    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-24 23:30:42
    // Problem Name: R_Palindrome_Array
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int Afunction(int arr[], int i, int j){
        if(i >= j){
            cout << "YES";
            return 0;
        }
        if(arr[i] != arr[j]){
            cout << "NO";
            return 0;
        }
        return Afunction(arr, i + 1, j - 1);
    }
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n;cin >>n;
        int arr[n];
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
        Afunction(arr,0,n-1);
     
        return 0;
    }

    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-25 23:20:52
    // Problem Name: S_Array_Average
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    double counter=0;
    void Afunction(int arr[], int i, int j){
        if(i == j){
            return;
        }
        counter+= arr[i];
        Afunction(arr,i+1, j);
    }
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n;cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
        Afunction(arr,0,n);
        double ans= counter/n;
        cout << fixed << setprecision(6) << ans;
        return 0;
    }

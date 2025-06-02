    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-02 22:50:06
    // Problem Name: R_Permutation_with_arrays
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n;cin>>n;
        int a[n],b[n];
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0 ; i < n; i++){
            cin >> b[i];
        }
        sort(a , a+n);
        sort(b , b+n);
        for(int i = 0 ; i < n; i++){
            if(a[i] != b[i]){
                cout << "no";
                return 0;
            }
        }
        cout <<"yes";
        return 0;
    }

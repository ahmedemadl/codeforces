    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-26 10:54:42
    // Problem Name: T_Combination
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int num_factorial(int n, int r){
        
        if(n < r){
            return 0;
        }
        if(r == 0){
            return 1;
        }
     
        if(r == 1){
            return n;
        }
        if(n==1){
            return 1;
        }
     
        return num_factorial(n-1,r-1) + num_factorial(n-1,r);
    }
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        ll n, r; cin >> n >> r;
     
        cout << num_factorial(n,r) << '\n';
     
        return 0;
    }

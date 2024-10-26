    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    ll Recursion(int x[],int n){
        if(n == -1){
            return 0;
        }
     
        return x[n] + Recursion(x, n-1);
    } 
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n;
        cin >> n;
        int x[n];
        for(int i = 0 ; i < n ; i ++){
            cin >> x[i];
        }
        cout<<  Recursion(x, n-1);
        return 0;
    }

#include <bits/stdc++.h>
using namespace std;
int Recursion(int a[],int n,int maxi){
   
    if(n == 0){
        return maxi;
    }
    maxi = max(a[n-1] , maxi);
    return Recursion(a, n-1, maxi);

    
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    int result = Recursion(a,n ,INT_MIN);
    cout << result ;

    return 0;
}

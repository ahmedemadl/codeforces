#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll GCD(ll a, ll b){
    while (b != 0){ 
        a = a % b;   
        swap(a, b);   
    }
    return a;  
}

int main(){
    int A, B;
    cin >> A >> B;

    ll gcd = GCD(A, B);
    ll lcm = (A/gcd)*B;

    cout << gcd << " " << lcm;
    return 0;
}

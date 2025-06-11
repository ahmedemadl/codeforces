    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-10 20:06:46
    // Problem Name: G_Summation_of_its_divisors
    // time complexity: O(sqrt(n)) 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    ll sum_divisors(ll n){
        ll sum{};
        for(ll i = 1 ; i*i <=n ; i++){
            if(n % i == 0){
                sum+= i;
                if((n/i) != i){
                sum+= (n/i);
                }
                
            }
        }
        return sum;
    }
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        ll n;
        cin >> n;
        ll ans = sum_divisors(n);
        cout << ans;
        return 0;
        
    }

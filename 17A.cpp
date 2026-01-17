//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-01-16 10:11:58
// Problem Name: A_Noldbach_problem
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long
// O(n log(long(n)))
// we have an array to sieve to check for primes and a vector containing the primes 
int n;
int not_prime[1001]={0};
vector<int> prime(int n){
        vector<int> pr; 
  
    // Sieve of Eratosthenes O(n log(long(n)))
	    for(int i = 2; i <= n ; i++){
	        if(!not_prime[i]){
                pr.push_back(i);
	            for(int j = i*i ; j < n; j+=i){
	                not_prime[j] = 1;
	            }
	        }
	    }
        return pr;
    }


int main(){
    cin.tie(0)->sync_with_stdio(0);
    int k;cin >> n >> k;
    vector<int> primes = prime(n);
    // for(auto it : primes){
    //     cout << it << " ";
    // }
    // return 0;
    int count=0;
    // for each prime we loop for the primes to see if there is to naghiber + 1 = prime[i]
    // O(m^2) were m is the number of primes 
    // the max num of primes is 100 
    for(int i = 0 ;i < primes.size() ; i++){
        for(int j = 0 ; j < primes.size()- 1 ; j ++){
            if(primes[i] == primes[j]+primes[j+1] +1){
                count++;
                break;
            }else if(primes[i] < primes[j]+primes[j+1] +1){
                break;
            }
        }
        if(count == k)break;
    }
    // cout << count << " " << k  << '\n';
    cout << ((count == k) ? "YES" : "NO");

    return 0;
}

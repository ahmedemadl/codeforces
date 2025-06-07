//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-05 02:30:29
// Problem Name: O_Five_in_One
// Learned     : يسطا هندل التيست كيسسيز خلي فيه شوية كرتيكال ثينكينج
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int maximim_number(int arr[], int n){
    int maxi = 0;
    for(int i = 0 ; i < n; i ++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

int minimum_number(int arr[], int n){
    int mini =INT_MAX;
    for(int i = 0 ; i < n; i++){
        if(mini > arr[i]){
            mini = arr[i];
        }
    }
    return mini;
}

int prime_numbers(int arr[],int n){
    int prime_count = 0;
    for(int i = 0 ; i < n ; i++){
        bool prime = 1;
        
        for(int j = 2 ; j*j <= arr[i]; j ++){
            if(arr[i] % j == 0){
                prime = 0;       
                break;
            }
        }
        if(prime == 1 && arr[i] != 1){
        prime_count ++;
        }
    }
    return prime_count;
}

int palindrome_numbers(int arr[],int n){
    int pal_count = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] < 10){
            pal_count ++;
        }
        else if(arr[i] % 11 == 0){
            pal_count++;
        }
    }
    return pal_count;
}

int maxi_divisors(int arr[], int n){
    int maxi_count = 0;
    int ans;
    for(int i = 0; i < n; i++){
    int count = 0;
        for(int j = 1 ; j * j  <=  arr[i]; j++){
            if(arr[i] % j == 0){
                count ++;
                if(arr[i]%j != j){
                    count ++;
                }
            }
        }
        if(maxi_count < count){
            maxi_count  = count ;
            ans = arr[i];
        }
        else if(maxi_count == count && arr[i] > ans){
            ans = arr[i];
        }
    }
    return ans;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxi = maximim_number(arr,n);
    int mini = minimum_number(arr,n);
    int primes = prime_numbers(arr,n);
    int palindrome =palindrome_numbers(arr,n);
    int divisors = maxi_divisors(arr,n);
    cout << "The maximum number : " << maxi << '\n';
    cout << "The minimum number : " << mini << '\n';
    cout << "The number of prime numbers : " << primes << '\n';
    cout << "The number of palindrome numbers : " << palindrome << '\n';
    cout << "The number that has the maximum number of divisors : " << divisors << '\n';

    return 0;
} 

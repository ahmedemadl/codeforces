    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-08-24 04:26:38
    // Description : Junior Training Sheet V7.0
    // Problem Name: V_Creating_Expression_1
    // Learned     : والله بحاول افهم 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    ll n, x;
    ll arr[21];
     
    bool recursion(int sum, int i){
        if(i == n) return sum == x;
     
        bool route1= recursion(sum + arr[i], i+1);
        bool route2 = recursion(sum - arr[i], i+1);
        
        return route1 || route2; 
     
    }
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        cin >> n >> x;
        for(int i = 0 ; i < n; i++){
            cin >> arr[i];
        }
        if(recursion(arr[0], 1)){
            cout<< "YES";
        }
        else{
            cout << "NO";
        }
     
        return 0;
    }

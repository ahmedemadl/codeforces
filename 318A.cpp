    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-10-07 19:52:10
    // Problem Name: A_Even_Odds
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        ll n,k;cin >> n >> k;
        if(k <= (n+1)/2){
            cout << (k*2)-1;
        }else{
            cout << (k-((n+1)/2))*2;
        }
        return 0;
    }

    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-10-04 21:01:33
    // Problem Name: A_Patrick_and_Shopping
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int a, b, d3; cin >> a >> b >> d3;
        int mn = min(a,b);
        int mx = max(a,b);
        int cost =mn;
        if(mn+mx < d3){
            cost+=mn+mx;
            cost+=mx;
        }else{
            cost+=d3;
            cost+= min(d3+mn, mx);
        }
        cout << cost;
        return 0;
    }

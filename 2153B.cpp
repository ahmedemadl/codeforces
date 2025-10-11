    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-10-10 17:43:18
    // Problem Name: B_Bitwise_Reversion
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        // int a= 3,b= 7;
        // int h =a&b;
        // int g = h&a;
        // int k = h&b;
        // cout << h << " " << g << " " << k;
        while(t--){
            int x, y, z;cin >> x >> y >> z;
            int a= x|z;
            int b=x|y;
            int c=y|z;
            int con1= a&b;
            int con2= b&c;
            int con3= a&c;
            if(con1 == x && con2 == y && con3 == z)cout << "YES" << '\n';
            else cout << "NO" << '\n';
     
        }
        return 0;
    }

    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-08-20 09:51:59
    // Description : Junior Training Sheet V7.0
    // Problem Code: 253B
    // Problem Name: B_Physics_Practical
    // Learned     : upper_bound function
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        int n, count_1 = 0, count_2 = 0, count_3 = 0, ans = INT_MAX, a;
        cin >> n ;
        int x[n];
        for (int i = 0 ; i < n ; i++){
            cin >> x[i]; 
        }
        sort(x, n+x);
        for (int i = 0 ; i < n ; i++){
            a = upper_bound(x, x+n, x[i]*2)-x;
            ans = min(ans , i+n-a);
        }
        cout << ans;
     
        return 0;
    }

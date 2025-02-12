//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-02-12 23:21:27
// Description : Junior Training Sheet V7.0
// Problem Code: 706B
// Problem Name: B_Interesting_drink
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, days;
    cin >> n;
    vector <int> shop_prices(n);

    for (int i = 0 ; i < n ; i++){
        cin >> shop_prices[i];
    }

    sort(shop_prices.begin(), shop_prices.end());

    cin >> days;
    vector <int> coins(days);

    for(int i = 0 ; i < days ; i++){
        cin >> coins[i];
    }
    for(int i = 0 ; i < days ; i++){     
        int ans = upper_bound(shop_prices.begin(), shop_prices.end(), coins[i]) - shop_prices.begin();
        cout << ans << endl;
        
    }

    return 0;
}

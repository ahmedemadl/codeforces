//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-03 12:20:16
// Problem Name: C_Game_with_Multiset
// Note        : Don't Get Hint, TRY HARDER!
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int m;cin >> m;
    vector <int> freq(31);
    while(m--){
        int op;cin >> op;
        int x;cin >> x;
        if(op == 1){
            freq[x]++;
        }else{
            bool flag =1;
            vector<int> f = freq;
            for(int i = 30 ;i >= 0 ;i--){
                if(((1 << i) & x) && f[i] == 0){
                    int j=i;
                    int target = 0;
                    
                    while(target < (1 << i) && j > 0){
                        j--;
                        int req = (1 << i) - target;
                        target += min(f[j] * (1<<j),req);
                        if(f[j] * (1<<j) > req)
                            f[j] -= req / (1 << j);
                        else 
                            f[j] = 0;
                    }
                    if(target < (1 << i)){
                        flag =0;
                        break;    
                    }
                } 
            }
            cout <<((flag) ? "YES" : "NO") << '\n';
        }
    }
    return 0;
}
/*
the thing is that , you can get a big number from smaller number 
but not vis versa 

1 0 0 0 == 
0 2 0 0 
0 0 4 0
0 0 0 8
66 
64 + 2; 


*/

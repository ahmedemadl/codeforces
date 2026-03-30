//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-30 14:35:05
// Problem Name: A_Vika_and_Her_Friends
// Note        : very good problem , if |x+y| is even it's a while 
// square and if |x+y| is odd it's a black square
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        // 
        int n, m, k;cin >> n >> m >> k;
        int x, y; cin >> x >> y;
        bool scape = 1;
        while(k--){
            int xi, yi; cin >> xi >> yi;
            if((abs(xi + yi) %2) == (abs( x + y)%2)) scape=0;
        } 
        cout << (scape ? "YES\n"  : "NO\n");
    }
    return 0;
}
/*
"obsserving"
2 2 1
1 1
1 2

12
00

yes

2 2 2
1 1
2 2
2 2

10
02
no

1 2 1
1 1
1 2
no
5 5 4
3 3
1 1
1 5
5 1
5 5

20

2 2 2
1 1
2 1
1 2

12
20


*/

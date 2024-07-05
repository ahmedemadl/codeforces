//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-07-05 15:31:54
// Description : Junior Training Sheet V7.0
// Problem Code: 579A
// Problem Name: A_Raising_Bacteria
// Learned     : math
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int x,bacteria=1;
    cin >> x;
    while (x>1){
        if (x % 2 != 0 ){
            x-=1;
            bacteria++;
        }
        x=x/2;
    }
    cout << bacteria;
    return 0;
}

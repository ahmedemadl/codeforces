//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-09-30 23:39:31
// Description : Junior Training Sheet V7.0
// Problem Code: 282A
// Problem Name: A_Bit
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    short n, count = 0;
    char a, b, c;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c;
        if(b == '+'){
            count ++;
        }
        else{
            count --;
        }
    }
    cout << count;
    return 0;
}

//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-12-24 22:29:52
// Description : Junior Training Sheet V7.0
// Problem Code: 47A
// Problem Name: A_Triangular_numbers
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
   int num, x;
   cin >> x;
    int m[529]= {0};

    for (int i = 1 ; i <= 32 ; i++){
        int num = (i*(i+1))/2;
        m[num]++;
    }
    if(m[x] == 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}

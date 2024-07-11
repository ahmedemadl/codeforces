//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-07-11 03:26:34
// Description : Junior Training Sheet V7.0
// Problem Code: 433B
// Problem Name: B_Kuriyama_Mirai_s_Stones
// Learned     : prefix sum , one base array , clean code
//=====================================================
// coment : the last submit , the perfix sum was int now it's long long
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,m,type,l,r;
    cin >> n;
    long long v[n+1],x[n+1]; //v will be sorted x is not
    //one base array 
    v[0]=0;
    x[0]=0;
    for (int i = 1 ; i < n+1 ; i ++){
        cin >> v[i];
        x[i]=v[i]; 
        
    }
    //sorting in increasing order 
    sort (v,v+n+1);

     for (int i = 1 ; i < n+1 ; i ++){
        v[i] = v[i]+v[i-1];
        x[i] = x[i]+x[i-1];
    }
    cin >> m ; 
    for (int i = 0 ; i < m ; i++){
        cin >> type >> l >> r;
        cout << ((type == 1)?  (x[r] - x[l-1]) : (v[r] - v[l-1])) << endl;
    }
    return 0;
}

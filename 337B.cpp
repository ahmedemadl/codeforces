//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-09-12 19:42:28
// Description : Junior Training Sheet V7.0
// Problem Code: 337B
// Problem Name: B_Routine_Problem
// Learned     : MATh
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int a, b, c, d ;
    cin >> a >> b >> c >> d;
    
    int x1=a*d-c*b;
    int x2=c*b-a*d;
   
   if (x1 > 0)
      cout<<x1/gcd(x1,a*d)<<"/"<<a*d/gcd(x1,a*d);
   else
      cout<<x2/gcd(x2,c*b)<<"/"<<c*b/gcd(x2,c*b);
    return 0;
}

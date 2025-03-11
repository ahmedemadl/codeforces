//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-03-11 23:43:54
// Description : Junior Training Sheet V7.0
// Problem Code: 122A
// Problem Name: A_Lucky_Division
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    if((n%4==0)||(n %7 ==0)||(n%47==0)||(n%74==0)||(n%44 ==0)||(n%77==0)||(n%444==0)||(n%777==0)||(n%474==0)||(n%447==0)||(n%477==0)||(n%747==0)||(n%774==0)||(n%744==0))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}

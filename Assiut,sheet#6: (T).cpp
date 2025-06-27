//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-14 14:07:12
// Problem Name: T_Circle_Task
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long
     
  int main(){
  cin.tie(0)->sync_with_stdio(0);
    double x1,y1, R;
    int N;
    cin >> x1 >> y1 >> R >> N;
    while(N--){
         double x2,y2;
         cin >> x2 >> y2;
         double Dis=sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));  // the distance between the circle center and the given point
         if(Dis <= R){
             cout << "YES" << '\n';
         }
         else{
               cout << "NO" << '\n';
         }
     }   
    return 0;
  }

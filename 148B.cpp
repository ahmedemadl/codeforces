//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-08-07 21:02:34
// Description : Junior Training Sheet V7.0
// Problem Code: 148B
// Problem Name: B_Escape
// Learned     : الصبر
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
  int vp, vd, t, f, c, count= 0;
  double prev = 0;
  cin >> vp >> vd >> t >> f >> c;
  double tp = c/vp;
  double td = (c/vd)+t;
  while(td < tp){
    count ++;
    double dpt = 2*((vp * t) + prev)/(vd-vp);
    double item_time = f + (dpt);
    prev += (dpt * vp)+(f*vp);
    td += item_time;
  }
  cout << count ;
    return 0;
}

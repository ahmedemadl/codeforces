//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-08-24 06:44:07
// Description : Junior Training Sheet V7.0
// Problem Name: Y_Number_of_Ways
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long


int recursion(int S, int E){
    if(S == E){
        return 1;
    }
    else if(S > E){
        return 0;
    }
    int route1 = recursion(S+1, E);
    int route2 = recursion(S+2, E);
    int route3 = recursion(S+3, E);
    return route1 + route2 + route3;
}



int main(){
    cin.tie(0)->sync_with_stdio(0);
    int S, E; cin >> S >> E;

    cout << recursion(S,E);
  

    return 0;
}

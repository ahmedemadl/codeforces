//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-11-18 23:34:29
// Problem Name: C_Yet_Another_Card_Deck
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, q;cin >> n>>q;
    deque<int> v;
    for(int i = 0 ; i < n;i ++){
        int num; cin >> num;
        v.push_back(num);
    }
    for(int i = 0 ;i < q; i ++){
        int color;cin >> color;
        int pos;
        for(int i = 0 ;i < n ;i++){
            if(v[i] == color){
                pos=i+1;
                break;
            }
        }
        cout << pos << " ";
        v.erase(v.begin() + pos-1);
        v.push_front(color);
        
    }
    return 0;
}

//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-03-04 22:56:01
// Description : Junior Training Sheet V7.0
// Problem Code: 558A
// Problem Name: A_Lala_Land_and_Apple_Trees
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, x , a;
    cin >> n;
    vector <pair<int,int>> pos, neg;
    for(int i = 0 ; i < n; i++){
        cin >> x >> a;
        if(x > 0){
            pos.push_back({x,a});
        }
        else{
            neg.push_back({x,a});
        }
    }
    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end(), greater<pair<int, int>>());


    int l = min(pos.size(), neg.size());
    ll sum = 0;
    
    for (int i = 0 ; i < l ; i++){
        sum+= pos[i].second;
        sum+= neg[i].second;
    
    }

    if(pos.size() != neg.size()){
        if(pos.size() > neg.size()){
            sum += pos[l].second;
        }
        else{
            sum += neg[l].second;
        }
    }
    cout << sum;

    return 0;
}

//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-10-14 23:22:53
// Description : Junior Training Sheet V7.0
// Problem Code: 437B
// Problem Name: B_The_Child_and_Set
// Learned     : Bitmask
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int lowbit(int n){
    return n & -n;
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int sum, limit;
    cin >> sum >> limit;

    vector<pair<int,int>> vec(limit);
    for (int i = 1 ; i <= limit ;i++){
        vec.push_back({lowbit(i), i});
    }

    sort(vec.rbegin() , vec.rend());
    vector<int> result;
    for(int i = 0 ; i < limit ; i++){
        if(sum == 0){
            break;
        }
        else{
            if(sum - vec[i].first >= 0){
                sum -= vec[i].first;
                result.push_back(vec[i].second);
            }
        }
    }

    if(sum == 0){
    cout << result.size() << endl;
    for(int i = 0 ; i < result.size() ; i++){
        cout << result[i] << " ";
    }
    }
    else{
        cout << -1;
    }

    return 0;
}

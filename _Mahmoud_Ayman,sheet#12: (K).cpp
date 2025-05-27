//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-05-25 23:33:28
// Description : Full Training 
// Problem Code: 
// Problem Name: K_Distinct_Numbers
// Learned     : set يا اخي تحس بعد معاناه  جهل اخيرا الواحد حل بكل سهوله
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, num;cin>>n;
    set <int> s;
    for(int i = 0 ; i < n ; i++){
        cin >> num;
        s.insert(num);
    }
    cout << s.size();
    return 0;
}

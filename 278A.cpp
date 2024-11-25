//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-11-25 23:27:57
// Description : Junior Training Sheet V7.0
// Problem Code: 278A
// Problem Name: A_Circle_Line
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    short n, s, t;
    cin >> n;
    vector <int> x(n);
    for (short i = 0 ; i < n ; i++){
        cin >> x[i];
    }
    cin >> s >> t;
    s--; t--;
    if (s > t)  swap(s,t);
    int num1 = accumulate(x.begin() + s, x.begin()+ t, 0);

    int num2 = accumulate(x.begin() + t, x.end(), 0) +
               accumulate(x.begin(), x.begin() + s, 0);
    
    int answer = min(num1, num2);
    cout << answer;
    return 0;
}

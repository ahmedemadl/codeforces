//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-06 22:00:10
// Description : Junior Training Sheet V7.0
// Problem Code: 137A
// Problem Name: A_Postcards_and_photos
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin >> s;

    int count = 1, albums = 0;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            albums += (count + 4) / 5;
            count = 1;
        }
    }
    albums += (count + 4) / 5;

    cout << albums << endl;

    return 0;
}

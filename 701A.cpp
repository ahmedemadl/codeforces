//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-12-25 21:46:09
// Description : Junior Training Sheet V7.0
// Problem Code: 701A
// Problem Name: A_cards
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> cards(n);

    for (int i = 0; i < n; i++) {
        cin >> cards[i].first;
        cards[i].second = i + 1;
    }

    sort(cards.begin(), cards.end());

    for (int i = 0; i < n / 2; i++) {
        cout << cards[i].second << " " << cards[n - 1 - i].second << "\n";
    }

    return 0;
}

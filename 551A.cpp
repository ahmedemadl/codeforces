#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> ratings(n);
    for (int i = 0; i < n; i++) {
        cin >> ratings[i].first;
        ratings[i].second = i;
    }

    sort(ratings.rbegin(), ratings.rend());

    vector<int> positions(n);
    int currentRank = 1;
    for (int i = 0; i < n; i++) {
        if (i > 0 && ratings[i].first == ratings[i - 1].first) {
            positions[ratings[i].second] = currentRank;
        } else {
            currentRank = i + 1;
            positions[ratings[i].second] = currentRank;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << positions[i] << " ";
    }
    cout << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    bool check = 0;
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                cout << "#";
            }
        } else {
            if (!check) {
                for (int j = 0; j < m - 1; j++) cout << ".";
                cout << "#";
            } else {
                cout << "#";
                for (int j = 1; j < m; j++) cout << ".";
            }
            check = !check;
        }
        cout << '\n';
    }

    return 0;
}

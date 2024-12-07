#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> buttons(m);
    for (int i = 0; i < m; ++i) {
        cin >> buttons[i];
    }

    vector<int> turnOff(n, 0);

    for (int button : buttons) {
        for (int i = button - 1; i < n; ++i) {
            if (turnOff[i] == 0) { // If light is still on
                turnOff[i] = button;
            }
        }
    }

    for (int light : turnOff) {
        cout << light << " ";
    }
    cout << endl;

    return 0;
}

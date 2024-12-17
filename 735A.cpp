#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string line;
    cin >> line;

    // Find positions of G and T
    int g_pos = line.find('G');
    int t_pos = line.find('T');

    // Ensure g_pos < t_pos for uniformity (swap if needed)
    if (g_pos > t_pos) {
        swap(g_pos, t_pos);
    }

    // Check every k-th position from g_pos to t_pos
    for (int i = g_pos; i <= t_pos; i += k) {
        if (line[i] == '#') {
            cout << "NO" << endl;
            return 0;
        }
        if (i == t_pos) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}

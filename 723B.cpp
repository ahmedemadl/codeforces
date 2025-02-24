#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int maxOutside = 0, insideWords = 0;
    bool inside = false;
    int currentLength = 0;

    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) {
            currentLength++;
        } else {
            if (currentLength > 0) {
                if (inside) insideWords++;
                else maxOutside = max(maxOutside, currentLength);
                currentLength = 0;
            }
            if (s[i] == '(') inside = true;
            if (s[i] == ')') inside = false;
        }
    }

    if (currentLength > 0) {
        if (inside) insideWords++;
        else maxOutside = max(maxOutside, currentLength);
    }

    cout << maxOutside << " " << insideWords << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count_A = 0, count_I = 0, count_F = 0;

    for (char c : s) {
        if (c == 'A') count_A++;
        else if (c == 'I') count_I++;
        else count_F++;
    }

    if (count_I == 0) 
        cout << count_A << endl;
    else if (count_I == 1) 
        cout << 1 << endl;
    else 
        cout << 0 << endl;

    return 0;
}

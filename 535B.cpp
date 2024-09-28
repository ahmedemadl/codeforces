//=====================================================
// Author      : chat GPT
// Date        : 2024-09-27 19:44:27
// Description : Junior Training Sheet V7.0
// Problem Code: 535B
// Problem Name: B_Tavas_and_SaDDas
// Learned     : it sopposed to be combinations and bitmaks
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    int length = n.size();
    int index = 0;

    // Step 1: Count how many lucky numbers have fewer digits.
    for (int i = 1; i < length; i++) {
        index += (1 << i); // 2^i numbers with i digits (all combinations of '4' and '7')
    }

    // Step 2: Compute the position of the current number among lucky numbers with the same number of digits.
    // Convert the number to binary-like representation where '4' is '0' and '7' is '1'.
    for (int i = 0; i < length; i++) {
        if (n[i] == '7') {
            index += (1 << (length - i - 1)); // Add the contribution of this position
        }
    }

    // Step 3: The final result is 1-based index, so add 1.
    cout << index + 1 << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string canPressInTime(int k, vector<string> &board) {
    vector<int> freq(10, 0); // Frequency array for digits 1-9

    // Count the frequency of each digit
    for (const auto &row : board) {
        for (char ch : row) {
            if (isdigit(ch)) {
                freq[ch - '0']++;
            }
        }
    }

    // Check if any digit appears more than 2*k times
    for (int count : freq) {
        if (count > 2 * k) {
            return "NO";
        }
    }

    return "YES";
}

int main() {
    int k;
    cin >> k;
    vector<string> board(4);
    
    for (int i = 0; i < 4; ++i) {
        cin >> board[i];
    }

    cout << canPressInTime(k, board) << endl;
    return 0;
}

//=====================================================
// Author      : chat gpt
// Date        : 2024-07-14 14:36:38
// Description : Junior Training Sheet V7.0
// Problem Code: TOE1
// Problem Name: Tic_Tac_Toe_I
// Learned     : graph 
//=====================================================
#include <iostream>
#include <queue>
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;

// Function to check if a player has won in the given configuration
bool is_win(const string& config, char player) {
    bool rows = 
        (config[0] == player && config[1] == player && config[2] == player) ||
        (config[3] == player && config[4] == player && config[5] == player) ||
        (config[6] == player && config[7] == player && config[8] == player);

    bool columns =
        (config[0] == player && config[3] == player && config[6] == player) ||
        (config[1] == player && config[4] == player && config[7] == player) ||
        (config[2] == player && config[5] == player && config[8] == player);

    bool diagonals =
        (config[0] == player && config[4] == player && config[8] == player) ||
        (config[2] == player && config[4] == player && config[6] == player);

    return rows || columns || diagonals;
}

// Function to validate the given board configuration
bool is_valid_configuration(const string& board) {
    // Count X's and O's
    int countX = 0, countO = 0;
    for (char c : board) {
        if (c == 'X') countX++;
        if (c == 'O') countO++;
    }

    // Early exit on invalid counts
    if (countO > countX || countX > countO + 1) return false;

    // Check if both players are winning, which is invalid
    bool xWins = is_win(board, 'X');
    bool oWins = is_win(board, 'O');
    if (xWins && oWins) return false;
    if (xWins && countX == countO) return false;
    if (oWins && countX > countO) return false;

    // Use BFS to simulate all possible game states
    string start = ".........";
    queue<pair<string, bool>> qu; // bool indicates whose turn it is, true for X, false for O
    unordered_set<string> visited;
    qu.push({ start, true });
    visited.insert(start);

    while (!qu.empty()) {
        string cur = qu.front().first;
        bool cur_player = qu.front().second;
        qu.pop();

        // If current configuration matches the target board
        if (cur == board) {
            return true;
        }

        // If the current configuration results in a win, it cannot proceed further
        if (is_win(cur, 'X') || is_win(cur, 'O')) continue;

        // Generate all possible next configurations
        for (int i = 0; i < 9; i++) {
            if (cur[i] == '.') {
                cur[i] = (cur_player ? 'X' : 'O');
                if (visited.find(cur) == visited.end()) {
                    qu.push({ cur, !cur_player });
                    visited.insert(cur);
                }
                cur[i] = '.'; // revert the move
            }
        }
    }
    return false;
}

int main() {
    int N;
    cin >> N;
    vector<string> results;

    for (int t = 0; t < N; t++) {
        string board = "";
        for (int i = 0; i < 3; i++) {
            string row;
            cin >> row;
            board += row;
        }

        // Validate the board configuration
        if (is_valid_configuration(board)) {
            results.push_back("yes");
        } else {
            results.push_back("no");
        }

        // Read the empty line between test cases
        if (t < N - 1) {
            string empty;
            cin.ignore();
            getline(cin, empty);
        }
    }

    // Output results
    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}

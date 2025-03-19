#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }

    // Initialize counters for rows and columns
    vector<int> row_counts(n, 0);
    vector<int> col_counts(n, 0);

    // Count the number of 'C's in each row and column
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 'C') {
                row_counts[i]++;
                col_counts[j]++;
            }
        }
    }

    // Calculate the number of pairs in rows
    int row_pairs = 0;
    for (int count : row_counts) {
        if (count >= 2) {
            row_pairs += count * (count - 1) / 2;
        }
    }

    // Calculate the number of pairs in columns
    int col_pairs = 0;
    for (int count : col_counts) {
        if (count >= 2) {
            col_pairs += count * (count - 1) / 2;
        }
    }

    // Total happiness is the sum of row_pairs and col_pairs
    int total_happiness = row_pairs + col_pairs;

    cout << total_happiness << endl;

    return 0;
}

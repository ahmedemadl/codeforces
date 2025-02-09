    #include <iostream>
    #include <vector>
    #include <unordered_map>
    #include <string>
    using namespace std;
     
    int main() {
        int n, m;
        cin >> n >> m;
        
        vector<string> grid(n);
        vector<unordered_map<char, int>> row_counts(n), col_counts(m);
     
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }
     
        for (int i = 0; i < n; i++) {
            for (char c : grid[i]) {
                row_counts[i][c]++;
            }
        }
     
        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                col_counts[j][grid[i][j]]++;
            }
        }
     
        string result = "";
     
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (row_counts[i][grid[i][j]] > 1 || col_counts[j][grid[i][j]] > 1) {
                    continue;
                }
                result += grid[i][j];
            }
        }
     
        cout << result << endl;
     
        return 0;
    }

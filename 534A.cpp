#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> result;

    // First, add all odd numbers
    for (int i = 1; i <= n; i += 2) {
        result.push_back(i);
    }

    // Then, add all even numbers
    for (int i = 2; i <= n; i += 2) {
        result.push_back(i);
    }

    // Output the number of students
    cout << result.size() << endl;

    // Output the arrangement
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}

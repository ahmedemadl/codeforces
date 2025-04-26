#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        
        int small = 1, large = n;
        vector<int> ans;

        // First element depends on what we want in first move
        if (s[0] == '<') {
            ans.push_back(large--);
        } else {
            ans.push_back(small++);
        }

        for (int i = 0; i < n-1; i++) {
            if (s[i] == '<') {
                ans.push_back(small++);
            } else {
                ans.push_back(large--);
            }
        }

        for (auto x : ans) cout << x << " ";
        cout << endl;
    }
}

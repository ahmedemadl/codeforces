#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    stack<char> st;
    for (char c : s) {
        if (!st.empty() && st.top() == 'x' && c == 'y') {
            st.pop();  // Remove "xy" pair
        } else {
            st.push(c);
        }
    }
    
    string result;
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    
    reverse(result.begin(), result.end()); // Stack reverses order
    cout << result << '\n';
    
    return 0;
}

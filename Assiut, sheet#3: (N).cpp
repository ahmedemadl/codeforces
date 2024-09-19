#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    string S;
    cin >> S;
    
    // Check if the character at position A is '-'
    if (S[A] != '-') {
        cout << "No" << endl;
        return 0;
    }
    
    // Check if all other characters are digits
    for (int i = 0; i < S.size(); i++) {
        if (i == A) continue; // Skip the '-' character
        if (!isdigit(S[i])) {
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
    return 0;
}

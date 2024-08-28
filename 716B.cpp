//=====================================================
// Author      : Chat GPT
// Date        : 2024-08-28 19:40:51
// Description : Junior Training Sheet V7.0
// Problem Code: 716B
// Problem Name: B_Complete_the_Word
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    // Length of the string
    int n = s.length();

    // If the length is less than 26, it's impossible
    if (n < 26) {
        cout << -1 << endl;
        return 0;
    }

    // Sliding window approach
    for (int i = 0; i <= n - 26; ++i) {
        vector<int> freq(26, 0);
        int question_marks = 0;
        
        // Count frequency of letters and the number of question marks in the current window
        for (int j = i; j < i + 26; ++j) {
            if (s[j] == '?') {
                question_marks++;
            } else {
                freq[s[j] - 'A']++;
            }
        }

        // Check if this window can form a complete alphabet
        int distinct_letters = 0;
        for (int k = 0; k < 26; ++k) {
            if (freq[k] > 1) {
                distinct_letters = -1; // This window has a repeated letter, can't be valid
                break;
            }
            if (freq[k] == 1) {
                distinct_letters++;
            }
        }

        if (distinct_letters + question_marks == 26) {
            // This window can be completed to a full alphabet
            set<char> missing_letters;
            for (char ch = 'A'; ch <= 'Z'; ++ch) {
                if (freq[ch - 'A'] == 0) {
                    missing_letters.insert(ch);
                }
            }

            // Replace the question marks in this window
            for (int j = i; j < i + 26; ++j) {
                if (s[j] == '?') {
                    s[j] = *missing_letters.begin();
                    missing_letters.erase(missing_letters.begin());
                }
            }

            // Replace the remaining '?' in the whole string with 'A'
            for (int j = 0; j < n; ++j) {
                if (s[j] == '?') {
                    s[j] = 'A';
                }
            }

            // Output the result
            cout << s << endl;
            return 0;
        }
    }

    // No valid window found
    cout << -1 << endl;
    return 0;
}

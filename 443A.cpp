#include <iostream>
#include <string>
#include <set>  // For set

using namespace std;

int main() {
    string input;
    
    // Read the entire line of input
    getline(cin, input);
    
    set<char> uniqueLetters;
    
    // Store unique alphabetic characters in the set
    for (char ch : input) {
        if (isalpha(ch)) {
            uniqueLetters.insert(ch);
        }
    }
    
    // Display the count of unique letters
    cout << uniqueLetters.size() ;
    
    return 0;
}

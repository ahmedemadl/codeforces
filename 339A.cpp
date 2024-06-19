#include <iostream>
#include <vector>
#include <algorithm>  // For std::sort
 
using namespace std;
 
int main() {
    string input;
  
    cin >> input;
    
    // Vector to store the numbers
    vector<int> numbers;
    
    // Extract numbers from the input string
    for (char ch : input) {
        if (ch != '+') {
            numbers.push_back(ch - '0');  // Convert char to int
        }
    }
    
    // Sort the numbers
    sort(numbers.begin(), numbers.end());
    
    // Construct the output string
    string output;
    for (size_t i = 0; i < numbers.size(); ++i) {
        output += to_string(numbers[i]);
        if (i != numbers.size()-1) {
            output += '+';
        }
    }
    
    cout << output << endl;
    
    return 0;
}

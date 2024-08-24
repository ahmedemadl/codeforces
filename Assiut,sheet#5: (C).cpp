    #include <iostream>
    #include <string>
    using namespace std;
     
    // Function to check if a number is odd
    bool isOdd(int N) {
        return N % 2 == 1;
    }
     
    // Function to check if the binary representation is a palindrome
    bool isBinaryPalindrome(int N) {
        string binary = "";
        while (N > 0) {
            binary += (N % 2) + '0';  // Convert N % 2 to a character and append to the binary string
            N /= 2;
        }
        
        // Check if the binary string is a palindrome
        int len = binary.length();
        for (int i = 0; i < len / 2; i++) {
            if (binary[i] != binary[len - i - 1]) {
                return false;
            }
        }
        return true;
    }
     
    int main() {
        int N;
        cin >> N;
        
        if (isOdd(N) && isBinaryPalindrome(N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
        return 0;
    }

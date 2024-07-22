    //=====================================================
    // Author      : chat GPT
    // Date        : 2024-07-22 22:40:58
    // Description : Junior Training Sheet V7.0
    // Problem Code: 476B
    // Problem Name: B_Dreamoon_and_WiFi
    // Learned     : PS is not that easy
    //=====================================================
    #include <iostream>
    #include <cmath>
    #include <string>
    using namespace std;
     
    // Function to calculate the final position based on the commands string
    int calculatePosition(const string &commands) {
        int position = 0;
        for (char command : commands) {
            if (command == '+') {
                position++;
            } else if (command == '-') {
                position--;
            }
        }
        return position;
    }
     
    // Function to count the number of ways to achieve a given delta using numUnrecognized steps
    int countWays(int numUnrecognized, int delta) {
        int totalSteps = numUnrecognized;
        int target = (totalSteps + delta) / 2;
     
        if ((totalSteps + delta) % 2 != 0 || target < 0 || target > totalSteps) {
            return 0;
        }
     
        // Calculate combination(totalSteps, target)
        long long ways = 1;
        for (int i = 0; i < target; ++i) {
            ways *= (totalSteps - i);
            ways /= (i + 1);
        }
        return ways;
    }
     
    int main() {
        string s1, s2;
        cin >> s1 >> s2;
     
        int targetPosition = calculatePosition(s1);
        int recognizedPosition = 0;
        int numUnrecognized = 0;
     
        for (char command : s2) {
            if (command == '+') {
                recognizedPosition++;
            } else if (command == '-') {
                recognizedPosition--;
            } else if (command == '?') {
                numUnrecognized++;
            }
        }
     
        int requiredChange = targetPosition - recognizedPosition;
     
        // Calculate the number of favorable ways
        int favorableWays = countWays(numUnrecognized, requiredChange);
     
        // Calculate the probability
        double totalWays = pow(2, numUnrecognized);
        double probability = favorableWays / totalWays;
        cout.precision(12);
        cout << fixed << probability << endl;
     
        return 0;
    }

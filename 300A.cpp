#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> negatives, positives, zeroes;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < 0) 
            negatives.push_back(x);
        else if (x > 0) 
            positives.push_back(x);
        else 
            zeroes.push_back(x);
    }

    // First set: must contain a negative product (at least one negative number)
    vector<int> set1, set2, set3;
    set1.push_back(negatives.back());
    negatives.pop_back();
    
    // If there are no positive numbers, move two negatives to set2 to make a positive product
    if (positives.empty()) {
        set2.push_back(negatives.back());
        negatives.pop_back();
        set2.push_back(negatives.back());
        negatives.pop_back();
    } else {
        // Otherwise, move all positive numbers to set2
        set2 = positives;
    }

    // Third set: must contain zero product, put all zeroes there
    set3 = zeroes;

    // Put remaining negatives in set3
    while (!negatives.empty()) {
        set3.push_back(negatives.back());
        negatives.pop_back();
    }

    // Print the sets
    cout << set1.size() << " ";
    for (int num : set1) cout << num << " ";
    cout << endl;

    cout << set2.size() << " ";
    for (int num : set2) cout << num << " ";
    cout << endl;

    cout << set3.size() << " ";
    for (int num : set3) cout << num << " ";
    cout << endl;

    return 0;
}

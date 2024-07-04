    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 4/7/2024
    // Description : Junior Training Sheet V7.0
    // Problem Type: A
    // Problem No. : 289
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
      int n, k, num1, num2;
      cin >> n >> k;
      int coverage = 0;
      for (int i = 0; i < n; i++) {
        cin >> num1 >> num2;
        coverage += (abs(num1 - num2) + 1);
      }
      if (coverage % k == 0) {
        cout << (coverage % k);
      } else {
        cout << (k - (coverage % k));
      }
      return 0;
    }

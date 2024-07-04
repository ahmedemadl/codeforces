    //=====================================================
    // Author      : ahmedgbr367
    // Date        : a/7/2024
    // Description : Junior Training Sheet V7.0
    // Problem Type: A
    // Problem No. : 296
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
      int n, frq_array[1000] = {0}, num;
      double h;
      cin >> n;
      for (int i = 0; i < n; i++) {
        cin >> num;
        frq_array[num-1]++;
      }
     
      sort(frq_array, frq_array + 1000, greater<int>());
      h = ((n+1) / 2);
      
      if ((frq_array[0]) > h) {
        cout << "NO";
      } else {
        cout << "YES";
      }
     
      return 0;
    }

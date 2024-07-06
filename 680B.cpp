    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-07-06 13:55:06
    // Description : Junior Training Sheet V7.0
    // Problem Code: 680B
    // Problem Name: B_Bear_and_Finding_Criminals
    // Learned     :
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
      cin.tie(0)->sync_with_stdio(0);
      int n, a, dis, criminals = 0, finish;
      cin >> n >> a;
      a = a - 1;
      int x[n];
      for (int i = 0; i < n; i++) {
        cin >> x[i];
      }
      int diference = n - 1 - a;
      int rage = max(diference, a);
      if (rage == diference) {
        rage = 0;
      } else {
        rage = a - diference;
      }
      for (int i = rage; i <= a; i++) {
        if (x[i] == 1) {
          dis = (a - i);
          if ((x[a + dis]) == 1) {
            if (dis == 0) {
              criminals++;
            } else {
              criminals += 2;
            }
          }
        }
      }
     
      if (a > (n/ 2)) {
        rage = 0;
        finish = a - diference - 1;
      } else if (a < (n/2)){
        rage = a * 2 + 1;
        finish = n - 1;
      }
      else {
          cout << criminals;
      return 0;
      }
      for (int i = rage; i <= finish; i++) {
        if (x[i] == 1) {
          criminals++;
        }
      }
      cout << criminals;
     
      return 0;
    }

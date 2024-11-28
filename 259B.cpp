    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        int a[3][3];
        
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cin >> a[i][j];
            }
        }
        
        int S = (a[0][1] + a[0][2] + a[1][0] + a[1][2] + a[2][0] + a[2][1]) / 2;
        
        a[0][0] = S - a[0][1] - a[0][2];  // a11
        a[1][1] = S - a[1][0] - a[1][2];  // a22
        a[2][2] = S - a[2][0] - a[2][1];  // a33
     
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
     
        return 0;
    }

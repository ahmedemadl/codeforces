#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int K, S;
    cin >> K >> S;
    
    int count = 0;
    for (int X = 0; X <= K; ++X) {
        for (int Y = 0; Y <= K; ++Y) {
            int Z = S - (X + Y);
            if (Z >= 0 && Z <= K) {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}

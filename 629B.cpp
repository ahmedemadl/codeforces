#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> males(367, 0), females(367, 0);

    for (int i = 0; i < n; i++) {
        char gender;
        int a, b;
        cin >> gender >> a >> b;

        for (int day = a; day <= b; day++) {
            if (gender == 'M')
                males[day]++;
            else
                females[day]++;
        }
    }

    int maxGuests = 0;
    for (int day = 1; day <= 366; day++) {
        maxGuests = max(maxGuests, 2 * min(males[day], females[day]));
    }

    cout << maxGuests << endl;
    return 0;
}

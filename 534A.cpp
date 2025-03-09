#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> result;
    if(n == 1 || n == 2){
        cout << 1 << endl << 1;
        return 0;
    }
    else if(n == 3){
        cout << 2 << endl << 1 << " " << 3 ;
        return 0;
    }
    else if(n == 4){
        cout << 4 << endl << 3 << " "<< 1 << " " << 4 << " " << 2;
        return 0;
    }
  
    for (int i = 1; i <= n; i += 2) {
        result.push_back(i);
    }

   
    for (int i = 2; i <= n; i += 2) {
        result.push_back(i);
    }

   
    cout << result.size() << endl;

   
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}

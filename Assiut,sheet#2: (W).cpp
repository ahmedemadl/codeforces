    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n; 
        cin >> n;
        int stars = 1, spaces = n-1;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < spaces; j++){
                cout << " ";
            }
            for(int j = 0 ; j < stars ; j++){
                cout << "*";
            }
            cout << endl;
        spaces--; stars += 2;
        }
        stars -= 2;
        spaces++;
     
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < spaces; j++){
                cout << " ";
            }
            for(int j = 0 ; j < stars ; j++){
                cout << "*";
            }
            cout << endl;
        spaces++; stars -= 2;
        }
        return 0;
    }
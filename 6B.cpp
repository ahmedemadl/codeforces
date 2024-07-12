//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-07-12 05:39:33
// Description : Junior Training Sheet V7.0
// Problem Code: 6B
// Problem Name: B_President_s_Office
// Learned     : العبد لله مفيش حاجه توقفه والله الموفق والمستعان
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    short n, m;
    char pre_color;
    vector<char> s;
    cin >> n >> m >> pre_color;
    char x[n+2][m+2];
    //one based
      for (int i = 0; i < n + 2; i++) {
        for (int j = 0; j < m + 2; j++) {
            x[i][j] = '.';
        }
    }
    
    for (int i = 1 ; i < n+1 ; i++ ){
        for (int j = 1 ; j < m+1 ; j++){
            cin >> x[i][j];
        }
    }
       for (int i = 1 ; i < n+1 ; i++ ){
        for (int j = 1 ; j < m+1 ; j++){
            if(x[i][j] == pre_color){
                s.push_back(x[i][j+1]);
                s.push_back(x[i][j-1]);
                s.push_back(x[i-1][j]);
                s.push_back(x[i+1][j]);
            }
        }
    }
    // Remove pre_color and '.' from vector s
    s.erase(std::remove_if(s.begin(), s.end(), 
    [&](char c) { return c == pre_color || c == '.'; }),
        s.end());

    set<char> uniqueCharacters(s.begin(), s.end());
    
    cout << uniqueCharacters.size()<<endl;


    return 0;
}

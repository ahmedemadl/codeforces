//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-11-09 22:33:13
// Description : Junior Training Sheet V7.0
// Problem Code: 721A
// Problem Name: A_One_dimensional_Japanese_Crossword
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,count= 0;
    string s;
    cin >> n >> s;
    vector <int> vec;
    
    for(int i = 0 ; i < n; i++){
        if(s[i] == 'B'){
            count++;
        }
        else if(count > 0){
            vec.push_back(count);
            count= 0;
        }
    }
    if(count > 0){
        vec.push_back(count);
    }
    cout << vec.size() << endl;
    for(int length : vec){
        cout << length << " ";
    }


    return 0;
}

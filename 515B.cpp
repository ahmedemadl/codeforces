//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-10-06 07:09:26
// Description : Junior Training Sheet V7.0
// Problem Code: 515B
// Problem Name: C_Drazil_and_Factorial
// Learned     : MATH
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    short n;
    string s;
    vector <int> a;
    cin >> n >> s; 
    
    int count = 0;
    for (int i = 0 ; i < n; i ++){
        int number = s[i] - '0';
      
       
        if(number == 0 || number == 1 ){
            continue;
        }
        else if (number == 4){
            a.push_back(number-1);
            a.push_back(2);
            a.push_back(2);    
        }
        else if (number == 8){
            a.push_back(number-1);
            a.push_back(2);
            a.push_back(2);
            a.push_back(2);          
        }
        else if (number == 6){
            a.push_back(number-1);
            a.push_back(3);       
        }
        else if (number == 9){
            a.push_back(number-2);
            a.push_back(3);
            a.push_back(3);
            a.push_back(2);       
        }
        else{
            a.push_back(number);
        }
    }
    sort(a.begin(), a.end(), greater<int>());

    for (int i : a){
        cout << i;
    }
    return 0;
}

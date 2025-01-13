//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-13 23:44:17
// Description : Junior Training Sheet V7.0
// Problem Code: 78A
// Problem Name: A_Haiku
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2); 
    getline(cin, s3);
    int count = 0;
    for(int i = 0 ; i < s1.size() ; i++){
        if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u'){
            count++;
        }
    }
    if(count != 5){
        cout<< "NO";
        return 0;
    }
    count = 0;
    for(int i = 0 ; i < s2.size() ; i++){
        if(s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u'){
            count++;
        }
    }
    if(count != 7){
        cout<< "NO";
        return 0;
    }
    count = 0;
    for(int i = 0 ; i < s3.size() ; i++){
        if(s3[i] == 'a' || s3[i] == 'e' || s3[i] == 'i' || s3[i] == 'o' || s3[i] == 'u'){
            count++;
        }
    }
    if(count != 5){
        cout<< "NO";
        return 0;
    }
    cout << "YES";


    return 0;
}

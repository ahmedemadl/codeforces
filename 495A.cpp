//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-03-06 23:48:41
// Description : Junior Training Sheet V7.0
// Problem Code: 495A
// Problem Name: A_Digital_Counter
// Learned     : data structure
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    int list [10] = { 2 , 7 , 2 , 3 , 3 , 4 , 2 , 5 , 1 , 2 };
    int a = n % 10;
    n /= 10;
    int b = n % 10;
    a = list[a];
    b = list[b];
    int answer = a * b; 

    cout << answer;

    return 0;
}

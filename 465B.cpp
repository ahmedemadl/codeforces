//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-11-08 13:56:16
// Description : Junior Training Sheet V7.0
// Problem Code: 465B
// Problem Name: B_Inbox_100500
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, count = 0;
    cin >> n;

    bool x[n], check = 0;

    for(int i = 0 ; i < n ; i++){
        cin >> x[i];
    }   

    if (x[0] == 1){
        count ++;
        check = 1;
    }

    for(int i = 1 ; i < n ; i++){

        if(x[i] == 1){
            if(x[i-1] == 0 && check == 1){
                count += 2;
            }
            else{
                count ++;
            }
            check = 1;
        }
    }

    cout << count ;
    return 0;
}

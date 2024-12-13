//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-12-13 23:35:51
// Description : Junior Training Sheet V7.0
// Problem Code: 460A
// Problem Name: A_Vasya_and_Socks
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int N, M, count = 0;
    cin >> N >> M;
    int socks= N, m = M;
    
    while(socks > 0){
        count++;
        socks--;
       
        if(m > 1 ){
            m--;
        }
        else{
            socks++;
            m = M;
        }
        if(socks == 0){
            cout << count;
            return 0;
        }
    }
    cout << count;

    return 0;
}

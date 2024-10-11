//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-10-11 08:03:16
// Description : Junior Training Sheet V7.0
// Problem Code: 546C
// Problem Name: C_Soldier_and_Cards
// Learned     : queue
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    short n, value, K1, K2, count = 0;
    cin >> n;
    cin >> K1;
    queue <short> q1, q2;

    for(short i = 0 ; i < K1 ; i++){
        cin >> value;
        q1.push(value);
    }
    
    cin >> K2;
    for (short i = 0 ; i < K2 ; i++){
        cin >> value;
        q2.push(value);
    }

    for (short i = 0 ; i < 1000 ; i++){
        if(q1.empty() || q2.empty()){
            if(q1.empty()){
                cout << count << " 2";
                return 0;
            }
            else{
                cout << count << " 1";
                return 0;
            }
        }
        else{
            count++;
            if(q1.front() > q2.front()){
                q1.push(q2.front());
                q1.push(q1.front());
                q1.pop();
                q2.pop();
            }
            else if(q1.front() < q2.front()){
                q2.push(q1.front());
                q2.push(q2.front());
                q1.pop();
                q2.pop();
            }
        }
    }
    cout << -1;

    return 0;
}

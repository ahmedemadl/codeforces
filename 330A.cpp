//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-02 23:13:03
// Description : Junior Training Sheet V7.0
// Problem Code: 330A
// Problem Name: A_Cakeminator
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    short r, c, sum = 0;
    cin >> r >> c;
    char x[r][c];
    bool check = 1;
    short taken = 0;
    for(int i = 0 ; i < r ; i ++){
        check = 1;
        for(int j = 0 ; j < c ; j ++){
            cin >> x[i][j];
            if(x[i][j] == 'S'){
                check = 0;
            }
        }
        if(check == 1){
            sum += c;
            for(int k = 0 ; k < c ; k++){
                x[i][k] = 't';
            }
        }
    }

    check = 1;
    for(int i = 0 ; i < c ; i ++){
        check = 1;
        taken = 0;
        for(int j = 0 ; j < r ; j ++){
            if(x[j][i] == 'S'){
                check = 0;
            }
            else{
                if(x[j][i] =='t'){
                    taken += 1;
                }
            }
        }
        if(check == 1){
            sum += (r - taken);
        }
    }
    cout << sum;



    return 0;
}

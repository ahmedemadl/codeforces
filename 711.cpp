//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-11-10 22:11:50
// Description : Junior Training Sheet V7.0
// Problem Code: 711A
// Problem Name: A_Bus_to_Udayland
// Learned     : nothing new , just practicing 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    char x[n][5];
    char a, b;
    bool check = 0;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(j == 1){
                cin >> x[i][2];
            }
            else{
               cin >> a >> b;
               if(a == 'O' &&  b =='O' && check == 0){
                check = 1;
                    if(j == 0){
                        x[i][0] = '+';
                        x[i][1] = '+';
                    }
                    else{
                        x[i][3] = '+';
                        x[i][4] = '+';
                    }
               }
               else{
                if(j == 0){
                        x[i][0] = a;
                        x[i][1] = b;
                    }
                    else{
                        x[i][3] = a;
                        x[i][4] = b;
                    }
               } 
            }
            
        }
    }

    if(check == 0){
        cout << "NO" ;
        return 0;
    }
    else{
        cout <<"YES" << endl;
    }

    for(int i = 0 ; i < n ; i ++){
        for(int j = 0; j <= 4 ; j++){
            cout << x[i][j];
        }
        cout << endl;
    }

    return 0;
}

//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-23 05:43:09
// Problem Name: C_Serval_and_The_Formula
// Note        : اهبد تاني
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        ll x,y;cin >> x >> y;

        // الفلح الجورزم
        int change = 0;
        while((x + y) != (x^y) && x < (1LL << 31) && y < (1LL << 31)){
            for(int i= 0 ;i <= 30 ;i++){
                if( ((1 << i) & x) && ((1 << i) & y) ){
                    bool act=0;
                    for(int j = i-1 ; j >=0 ;j--){
                        if(((1 << j) & x) != ((1 << j) & y)){
                            x+= (1 << j);
                            y+= (1 << j);
                            change += (1 << j);
                            act = 1;
                            break;
                        }
                    }
                    if(!act){
                        x+= (1 << i);
                        y+= (1 << i);
                        change += (1 << i);
                    }
                    break;
                }
            }
        }
        // to display x and y in binary 
        //     for(int i= 0 ;i <= 30 ;i++){
        //         if( ((1 << i) & x) ){
        //             cout << 1;
        //         }else cout << 0;
        //     }
        //     cout<< '\n';
        //     for(int i= 0 ;i <= 30 ;i++){
        //         if( ((1 << i) & y) ){
        //            cout << 1;
        //         }else cout << 0;
        //     }
        if((x + y) == (x^y) && x < (1LL << 31) && y < (1LL << 31)){
            cout << change<< '\n';
        }else{
            cout << -1 << '\n';
        }
    }
    return 0;
}
/*
0010 => 0110
0101 => 1001

*/

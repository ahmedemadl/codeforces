//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-12-29 16:48:59
// Problem Name: B_New_Year_Cake
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a>> b;
        int option1=0, option2=0;
        int a1= a, b1=b;

        for(int i =0 ,j=1; i < 30; i++,j*= 2){
            if(i% 2 == 0){
                a1-=  j;
            }else{  
                b1-= j;
            }
            option1++;
            if(a1 < 0 || b1 < 0){
                option1--;
                break;
            }
        }

        for(int i =0 ,j=1; i < 30; i++,j*= 2){
            if(i% 2 == 0){
                b-=  j;
            }else{  
                a-= j;
            }
            option2++;
            if(a < 0 || b < 0){
                option2--;
                break;
            }
        }
        
        cout << max(option1,option2) << '\n';
    }
    return 0;
}

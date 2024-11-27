    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-11-27 14:34:06
    // Description : Junior Training Sheet V7.0
    // Problem Code: 492A
    // Problem Name: A_Vanya_and_Cubes
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        short n;
        cin >> n;
        int current_cube = 1;
        int hight = 1;
        n--;
        for(int i = 2; i < INT_MAX ; i++){
            current_cube += i;
            if(current_cube <= n){
                hight ++;
                n-=current_cube;
            }
            else{
                cout << hight ;
                return 0;
            }
        }
     
        return 0;
    }

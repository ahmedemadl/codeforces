    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-12-22 21:36:00
    // Problem Name: A_In_Search_of_an_Easy_Problem
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        int n; cin >> n;
        bool flag = 0;
        for(int i = 0 ;i < n; i ++){
            int num; cin >> num;
            if(num == 1){
                flag =1;
            }
        }
        if(flag){
            cout << "HARD";
        }else{
            cout << "EASY";
        }
        return 0;
    }

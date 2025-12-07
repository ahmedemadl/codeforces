    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-12-07 10:37:53
    // Problem Name: A_Drazil_and_Date
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int a, b, s;
        cin >> a >> b >> s;
        if(a < 0) a*= -1;
        if(b < 0) b*= -1;
        if(a+b > s || (s - a+b) % 2 != 0){
            cout << "No";
        }else{
            cout << "Yes";
        }
        return 0;
    }

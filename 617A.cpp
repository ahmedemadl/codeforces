    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-11-02 04:02:33
    // Description : Junior Training Sheet V7.0
    // Problem Code: 617A
    // Problem Name: A_Elephant
    // Learned     : Basic math 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int x;
        cin >> x;
        int answer = 0;
        x++;
        while(x >= 5){
            answer += x / 5;
            x = x % 5;
        }
        while(x >= 4 ){
            answer += x / 4;
            x = x % 4;
        }
        while(x >= 3){
            answer += x / 3;
            x = x % 3;
        }
        while(x >= 2){
            answer += x / 2;
            x = x % 2;
        }
        cout << answer ;
     
        return 0;
    }

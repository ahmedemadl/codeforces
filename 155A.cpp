    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-12-16 22:44:10
    // Problem Name: A_I_love_username
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n; cin >> n;
        int count= 0;
        int past, cur;
        cin >> past;
        int mini = past;
        int maxi = past;
        for(int i = 1 ;i < n; i++){
            cin >> cur;
            if(cur > maxi){
                maxi = cur;
                count++;
            }else if(cur < mini){
                mini = cur;
                count++;
            } 
            past =cur;
        }
        cout << count;
        return 0;
    }

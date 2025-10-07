    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-10-06 21:18:32
    // Problem Name: A_Choosing_Teams
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n, k; cin >> n >> k;
        int count=0;
        for(int i=0; i < n; i++){
            int num; cin >> num;
            if(5-num >= k){
                count++;
            }
     
        }
        cout << count/3;
        return 0;
    }

    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-20 16:42:31
    // Problem Name: J - Currency System in Geraldion
    // Learned     : مسأله عبيطه .. ديسكربشن صعب وفكره هبله
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n ; cin >> n;
        for(int i = 0 ; i < n; i++){
            int num; cin >> num;
            if(num == 1){
                cout << -1;
                return 0;
            }
        }
        cout << 1;
        return 0;
    }

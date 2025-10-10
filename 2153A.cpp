    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-10-10 17:38:12
    // Problem Name: A_Circle_of_Apple_Trees
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            int n;cin >> n;
            set<int>st;
            for(int i = 0 ; i < n;i++){
                int num; cin >> num;
                st.insert(num);
            }
            cout << st.size()<< '\n';
     
     
        }
        return 0;
    }

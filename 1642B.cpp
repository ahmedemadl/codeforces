    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-12-08 04:48:33
    // Problem Name: B_Power_Walking
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t;cin >> t;
        while(t--){
            int n;cin >> n;
            set<int> st;
            for(int i = 0 ;i < n; i++){
                int num;cin >> num;
                st.insert(num);
            }
            int a = 1;
            for(int i = 1 ;i <= n ; i++){
                if( i <= st.size() ){
                    cout << st.size();
                }else{
                    cout << st.size() + a;
                    a++;
                }
                cout << " ";
            }
            cout << '\n';
        }
        return 0;
    }

    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-09-12 15:32:55
    // Description : 2025-09-12 02:18:55
    // Description : ICPC Assiut University Training - Juniors Phase 1 Sheets-2022
    // Problem Name: K_max_element_in_stack
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n; cin >> n;
        stack<ll> st; 
        while(n--){
            short op ; cin >> op;
            if(op == 1){
                ll num ;cin >> num;
                if(st.empty()){
                    st.push(num);
                }
                else if(st.top() < num){
                    st.push(num);
                }
                else{
                    st.push(st.top());
                }    
            }else{
                st.pop();
            }
            cout << st.top() << '\n';
        }
     
        return 0;
    }

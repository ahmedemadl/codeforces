    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-09-27 04:30:38
    // Problem Name: A_Forked
    // Learned     :
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            set<pair<int,int>> k_st, q_st;
            int a, b; cin >> a >> b;
            int k_x,k_y, q_x, q_y; cin >> k_x >> k_y >> q_x >> q_y;
            // كل المربعات اللي الحصان ممكن يهاجم منها الملك 
            // 8 squares max
            // I use set becuase if a == b then there is duplicate  
            k_st.insert({k_x+a, k_y+b});
            k_st.insert({k_x+b, k_y+a});
     
            k_st.insert({k_x-a, k_y+b});
            k_st.insert({k_x-b, k_y+a});
     
            k_st.insert({k_x+a, k_y-b});
            k_st.insert({k_x+b, k_y-a});
            
            k_st.insert({k_x-a, k_y-b});
            k_st.insert({k_x-b, k_y-a});
            // كل المربعات اللي الحصان ممكن يهاجم منها الوزير 
            // 8 squares max     
            q_st.insert({q_x+a, q_y+b});
            q_st.insert({q_x+b, q_y+a});
     
            q_st.insert({q_x-a, q_y+b});
            q_st.insert({q_x-b, q_y+a});
     
            q_st.insert({q_x+a, q_y-b});
            q_st.insert({q_x+b, q_y-a});
            
            q_st.insert({q_x-a, q_y-b});
            q_st.insert({q_x-b, q_y-a});
            int count = 0;
            // لو في نقاطع هات 
            for(auto num : q_st){
                if(k_st.find(num) != k_st.end()){
                    count ++;
                }
            }
            cout << count << '\n';
        }
     
        return 0;
    }

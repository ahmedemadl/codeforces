    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-09-12 01:57:53
    // Description : ICPC Assiut University Training - Juniors Phase 1 Sheets-2022
    // Problem Name: H_Ada_and_Queue
    // Learned     : IDK if this the idea of the problem 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n; cin >> n;
        deque<int>ans;
     
        while(n--){
            string s; cin >> s;
            if(s == "toFront"){
                int num ; cin >> num;
                ans.push_front(num);
            }
            else if(s == "push_back"){
                int num; cin >> num;
                ans.push_back(num);
            }
            else if(s == "reverse"){
                vector<int> rev;
                for(int n : ans){
                    rev.push_back(n);
                }
                for(int i = rev.size() - 1, j = 0 ; i >= 0 ; i--, j++){
                    ans[j] = rev[i];
                } 
            }
            else if(s == "front"){
                if(ans.empty()){
                    cout << "No job for Ada?" << '\n';
                }else{
                cout << ans.front() << '\n';
                ans.pop_front();
                }
            }
            else if(s == "back"){
                if(ans.empty()){
                    cout << "No job for Ada?" << '\n';
                }else{
                    cout << ans.back() << '\n';
                    ans.pop_back();
                }
            }
                
        }
     
        return 0;
    }

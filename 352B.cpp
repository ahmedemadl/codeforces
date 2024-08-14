

    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-08-13 10:16:39
    // Description : Junior Training Sheet V7.0
    // Problem Code: 352B
    // Problem Name: B_Jeff_and_Periods
    // Learned     :  هتكسل تتعلم عمرك ما هتتطور .. لازم تدوس على نفسك وتكسرالانسان الكسول اللي جواك
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n;
        cin >>n;
        int org_arr[n];
        map<int, vector<int>> positions;
        vector<pair<int,int>>final_shit;
     
        for (int i = 0 ; i < n ; i++){
            cin >> org_arr[i]; 
            positions[org_arr[i]].push_back(i);
        }
       for (const auto& entry : positions) {
            const vector<int>& pos = entry.second;
            bool is_arithmetic = true;
            int period = 0;
            
            if (pos.size() > 1) {
                period = pos[1] - pos[0];
                for (int i = 2; i < pos.size(); i++) {
                    if (pos[i] - pos[i - 1] != period) {
                        is_arithmetic = false;
                        break;
                    }
                }
            }
                if (is_arithmetic) {
                final_shit.push_back(make_pair(entry.first, period));
            }
        }
            cout << final_shit.size() << endl;
           for(const auto& p : final_shit){
            cout << p.first << " " << p.second  << endl;
        }
        return 0;
    }

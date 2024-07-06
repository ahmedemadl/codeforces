

    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-07-06 16:13:49
    // Description : Junior Training Sheet V7.0
    // Problem Code: 16B
    // Problem Name: B_Burglar_and_Matches
    // Learned     : map
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        
     
         multimap<int, int> myMultimap;
        int n,m, key, value,answer=0;
        cin >> m;
        // Getting number of elements from user
        cin >> n;
     
        // Inserting elements from user input
        for (int i = 0; i < n; ++i) {
           
            cin >> key >> value;
            myMultimap.insert(pair<int, int>(key, value));
        }
           // Iterating through the multimap and storing in a vector
        vector<pair<int, int>> elements;
        for (const auto &pair : myMultimap) {
            elements.push_back(pair);
        }
         // Sorting the vector based on the second element in descending order
        sort(elements.begin(), elements.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
            return a.second > b.second;
        });
     
     
        for (const auto &pair : elements) {
            for (int i =0 ; i < pair.first ;i++){
            answer += pair.second;
             
             m--; 
              if (m == 0){
                    cout << answer;
                    return 0;
                }
    }
        }
        cout << answer;
      return 0;
    }

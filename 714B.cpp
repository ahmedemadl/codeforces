    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-07-29 15:02:20
    // Description : Junior Training Sheet V7.0
    // Problem Code: 714B
    // Problem Name: B_Filya_and_Homework
    // Learned     : Use a set to store unique elements
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    void removeDuplicates(vector<int>& x){
        // Use a set to store unique elements
        set<int> uniqueElements(x.begin(), x.end());
     
        //clear the orginal array and insert the unique elements back
        x.assign(uniqueElements.begin(), uniqueElements.end());
     
        //sort the array in increasing order
        sort(x.begin(), x.end());
    }
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n;
        cin >> n;
        vector<int> x(n);
     
        for(int i = 0 ; i < n ; i++){
            cin >> x[i];        
        }
     
        removeDuplicates(x);
     
        if (x.size() > 3){
            cout << "NO";
            return 0;
        }
        if (x[1]-x[0] == x[2]-x[1] || x.size() < 3){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        return 0;
    }

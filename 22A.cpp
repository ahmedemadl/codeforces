    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-11-13 20:00:37
    // Description : Junior Training Sheet V7.0
    // Problem Code: 22A
    // Problem Name: A_Second_Order_Statistics
    // Learned     : set , convert set to vector
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n, num;
        cin >> n;
        set <int> x;
        for(int i = 0;  i < n ; i ++){
            cin >> num;
            x.insert(num);
        }
        vector <int> vec(x.begin(), x.end());
        
        if(vec.size() == 1){
            cout << "NO";
        }
        else{
            cout << vec[1];
        }
     
        return 0;
    }

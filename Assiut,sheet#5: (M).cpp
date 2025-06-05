    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-05 00:24:06
    // Problem Name: M_Distinct_Numbers
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    void myfunction(set<int> a){
        cout << a.size();
    }
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n;cin>> n;
        int num;
        set <int> a;
        for(int i = 0 ; i < n; i++){
            cin >> num;
            a.insert(num);
        }
        myfunction(a);
     
        return 0;
    }

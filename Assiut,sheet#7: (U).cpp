    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-09-04 11:45:25
    // Problem Name: U_Knapsack
    // Learned     : قدراتي العقليه مش مستوعبه الكود
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int weight[21];
    int value[21];
     
    int knapsack(int w, int items){
        if(w == 0 || items == 0) return 0;
     
        if(weight[items - 1] > w) return knapsack(w, items -1);
     
        return max((value[items -1] + knapsack(w- weight[items - 1], items-1)),knapsack(w, items-1));
      
    }
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n, w; cin >> n >> w;
            for(int i= 0 ; i < n ; i++){
                cin >> weight[i] >> value[i];
            }
            cout << knapsack(w, n);
     
        return 0;
    }

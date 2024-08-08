    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-08-08 20:05:39
    // Description : Junior Training Sheet V7.0
    // Problem Code: 262B
    // Problem Name: B_Roma_and_Changing_Signs
    // Learned     : just a samll mistake i uses || instead of &&
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n , k ;
        cin >> n >> k ;
        long long total_income = 0;
        int min = INT_MAX;
        int x[n];
        for (int i = 0 ; i < n ; i++){
            cin >> x[i];
            if (x[i] < 0 && k > 0){
                x[i] = -1*x[i];
                k--;
            }
            total_income += x[i];
            if(min > x[i]){
                min = x[i];
            } 
        }
        if ( k % 2 == 0 ){   
                cout << total_income;
                return 0;
        }
        else if ( k % 2 != 0){
            total_income = total_income - min + (-1 * min);
            cout << total_income;
            return 0;
        }
        return 0;
    }

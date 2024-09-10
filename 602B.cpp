

    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-09-10 08:44:30
    // Description : Junior Training Sheet V7.0
    // Problem Code: 602B
    // Problem Name: B_Approximating_a_Constant_Range
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n, maxi_length = 1, prev = -1, current_count = 1, prev_count = 0 ;
        cin >> n;
        int x[n];
        for(int i = 0 ; i < n ; i++){
            cin >> x[i];
        }
     
        int current  = x[0];
        for (int i = 1 ; i < n ; i++){
     
            if(x[i] == current){
                current_count++;
            }
            else if (x[i] == prev){
                prev_count += current_count;
                prev = current;
                current = x[i];
                current_count = 1;
            }
            else{
                maxi_length = max(maxi_length, prev_count + current_count);
                prev = current;
                current = x[i];
                prev_count = current_count;
                current_count = 1;
             
            }
        }
        cout << max(maxi_length, (prev_count+current_count));
        return 0;
    }

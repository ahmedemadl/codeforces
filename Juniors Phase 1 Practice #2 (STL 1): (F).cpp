    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-09-08 13:47:50
    // Description : ICPC Assiut University Training - Juniors Phase 1 Sheets-2022
    // Problem Name: F_Empty_array
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n; cin >> n;
        int freq[100001] = {0};
        int start = INT_MAX, end = 0;
        for(int i = 0 ; i < n ;i++){
            int num ; cin >> num;
            freq[num] ++;
            end = max(end , num);
            start = min(start, num);
     
        }
     
        bool flag = false;
        while(true){
            flag = false;
            int temp1= INT_MAX, temp2=0;
            for(int i = start ; i <= end ; i++){
                if(freq[i] > 0){
                    cout << i << " ";
                    freq[i]--;
                    flag = true;
                    if(freq[i] > 0){
                        temp2 = max(temp2, i);
                        temp1 = min(temp1, i);
                    }
                }
     
            }
            if(!flag) break;
            cout << '\n';
            end = temp2;
            start = temp1;
        }
     
        return 0;
    }    

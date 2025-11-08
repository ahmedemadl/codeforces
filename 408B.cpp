    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-11-07 22:57:16
    // Problem Name: B_Garland
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        string s1,s2; cin >> s1 >> s2;
        int freq_1[26] = { 0 }, freq_2[26] = { 0 };
        for(int i = 0 ;i < s1.size() ; i++){
            int num = s1[i] - 'a';
            freq_1[num]++;
        }
        for(int j = 0; j < s2.size() ; j++){
            int num = s2[j] - 'a';
            freq_2[num]++;
        }
        int sum =0;
        bool valid=1;
        for(int i = 0 ; i < 26 ; i ++){
            sum += min(freq_1[i], freq_2[i]);
            if(freq_2[i] > 0){
                if(freq_1[i] == 0){
                    valid=0;
                    break;
                }
            }
        }
     
        if(!valid) cout << -1;
        else cout << sum;
        return 0;
    }

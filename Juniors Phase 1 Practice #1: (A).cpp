    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-08-12 12:52:16
    // Problem Name: A_Alphabetic_Removals
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n, k; cin  >> n >> k;
        string s; cin >> s;
        int freq[26] = {0};
     
        for(int i = 0 ; i < n; i++){
            int num = s[i] - 'a';
            freq[num]++;
        }
        int remove[26] ={0};
        int i = 0;
        while(k > 0){
            while(freq[i] > 0 && k > 0){
                freq[i]--;
                remove[i]++;
                k--;
            }
            i++;
        }
        for(int i = 0 ; i < n ; i++){
            int num = s[i] - 'a';
            if(remove[num] != 0){
                remove[num]--;
            }
            else{
                cout <<s[i];
            }
        }
     
        return 0;
    }

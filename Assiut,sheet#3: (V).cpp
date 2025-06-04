    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-05-19 23:47:43
    // Problem Name: V_Frequency_Array
    // Learned     : frequency array
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n,m;cin>>n>>m;
        int freq[m+1]={},num;
        for(int i = 0 ; i < n; i++){
            cin>>num;
            freq[num]++;
        }
        for(int i = 1 ; i <= m ; i++){
            cout<< freq[i]<< '\n';
        }
     
        return 0;
    }

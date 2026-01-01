//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-05-23 17:58:37
// Problem Name: L - Taxi
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;cin>> n;
    int freq[4]={};
    int num;
    for(int i = 0 ; i < n ; i++){
        cin >> num;
        freq[num-1]++;
    }
    int ans= freq[3];
    while(true){
        if(freq[2] == 0){
            break;
        }
        else{
            ans++;
            freq[2]--;
            if(freq[0] != 0){
                freq[0]--;
            }
        }
    }

    if(freq[1] % 2 == 0 ){
        ans+= freq[1]/2;
        ans+= freq[0]/4;
        if(freq[0] % 4 != 0){
           ans++; 
        }
        
        cout << ans;return 0;
    }
    else{
        ans+= (freq[1])/2;
        ans++;
        if(freq[0] == 1){
            freq[0]--;
        }
        else if(freq[0] > 1){
            freq[0]-=2;
        }
        ans+= freq[0]/4;

        if(freq[0] % 4 != 0){
           ans++; 
        }
        cout << ans; return 0;
    } 

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        int freq[n+1]={0};
        for(int i = 0 ; i < n; i++){
            int num;cin >> num;
            freq[num]++;
        }
        int ans=0;
        for(int i = 0 ;i <= n; i++){
            if(freq[i] > i){
                ans+= freq[i] -i;
            }else if(freq[i] < i){
                ans+= freq[i];
            }
        }
        cout << ans << '\n';

    }
    return 0;
}

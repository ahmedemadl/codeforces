    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-10-19 17:46:50
    // Problem Name: A_Notelock
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            int n, k;cin >> n >>k;
            string s;cin >> s;
            bool elem = 0;
            int count= 0;
            k--;
            int count_elem=k;
            for(int i = 0 ; i < n ; i++){
                if(s[i] == '1' && elem == 0){
                    count++;
                    elem=1;
                    count_elem= k+1;
                }else if(s[i] == '1' && elem ==1){
                    count_elem=k+1;
                }
     
                count_elem--;
                if(count_elem == 0){
                    elem = 0;
                }
            }
            cout << count << '\n';
     
        }
        return 0;
    }

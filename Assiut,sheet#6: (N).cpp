//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-13 07:38:17
// Problem Name: N_Convert_to_Base
// Learned     :
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int T; cin >> T;
    string n;
    int x; cin >> n >> x;
    
    if(T == 1){
        ll ans= 0;
        int j = 0;
        for(int i = n.size()-1 ; i >= 0 ; i--){
            int num;
            if(n[i] >= '0' && n[i] <= '9'){
                num = n[i] - '0';
            }
            else{
                num = n[i] - 'A';
                num+=10;
            }
            ans+= pow(x,j) * (num); 
            j++;   
        }
        cout << ans;
        return 0;
    }
    else{
        int a = stoi(n);  
        vector <int> ans;
        while(true){
            ll num = a%x;  
            a /= x;
            ans.push_back(num);
            if(a == 0){
                break;
            }
        }
        for(int i = ans.size() - 1 ; i >= 0 ; i--){
            
            if(ans[i] < 10){
                cout << ans[i];
            }
            else{ 
                int m = ans[i] - 10;
                char res = 'A' + m;
                cout << res;
            }
        }
    }

    return 0;
}

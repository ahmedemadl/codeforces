    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-11-30 01:30:35
    // Problem Name: B_Split
    // انا مصدوم لو طلعت صح
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            int n;cin >> n;
            int div_1 = 0, div_2 = 0, div_4 = 0;
            int size = 2*n + 1;
            int freq[size]= {0};
            for(int i = 0; i < 2*n; i++){
                int num;cin >> num;
                freq[num]++;
            }
            for(int i = 1 ; i < size; i++){
                if(freq[i] != 0){
                    if(freq[i] % 2 != 0){
                        div_1++;
                    }else{
                        if(freq[i] % 4 == 0){
                            div_4++;
                        }else{
                            div_2++;
                        }
                    }
                }
            }
            int ans=0;
            
            div_2 += (div_4/2)* 2;
            // cout << div_2  << "  ";
            ans+= 2*div_2;
            if(div_4 % 2 != 0 && div_1 > 1) div_1+=2;
            ans+= div_1;
            cout << ans << '\n';
     
        }
        return 0;
    }

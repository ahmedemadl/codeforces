        //=====================================================
        // Author      : ahmedgbr367
        // Date        : 2025-10-24 04:27:11
        // Problem Name: M_Lucky_Numbers_easy
        // Note        : brute force using bitmask --> important for solving problems
        //=====================================================
        #include <bits/stdc++.h>
        using namespace std;
        #define ll long long
         
        /*
        the idea is to brute force all possible lucky numbers using bit mask
        the time to complixity is O(n^2) where n is the number of digits in the generated number
        for loop for the all possible combinations and for loop on each bit to generate the number
        make sure it satisfy the conditions of the problem and find the minimum 
        */
         
        int main(){
            cin.tie(0)->sync_with_stdio(0);
            ll n;cin >> n;
            ll num_of_digits =0;
            int temp = n;
            while(temp > 0){
                temp/=10;
                num_of_digits++;
            }
            if(num_of_digits%2>0)num_of_digits++;
            ll test = 0;
         
            for(int i = 0; i < num_of_digits/2 ; i++){
                test*=10;
                test+= 7;
            }
            for(int i = 0; i < num_of_digits/2 ; i++){
                test*=10;
                test+= 4;
            }
            if(test < n)num_of_digits+=2;
            ll ans= LLONG_MAX;
            for(int i = 0 ; i < (1LL << num_of_digits); i++){
                int four=0,seven=0;
                ll generated=0;
                for(int j = 0 ; j < num_of_digits ; j++){
                    generated*=10;
                    if((i & (1LL<<j) ) > 0){
                        generated+=4;
                        four++;
                    }
                    else{
                        generated+=7;
                        seven++;
                    }
                }
         
                if(generated >= n && seven == four){
                    ans=min(ans,generated);
                }
            }
            cout << ans;
            return 0;
        }

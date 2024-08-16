    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-08-16 10:18:26
    // Description : Junior Training Sheet V7.0
    // Problem Code: 236B
    // Problem Name: B_Easy_Number_Challenge
    // Learned     : number theory && dp 
    // Prev Mistake: Global المفروض تكون فوق عشان تيقى long long x[1000001]; المشكلة كانت في 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    long long x[1000001];
    long long d(long long a){
        int count= 0;
         if (x[a] != 0){
            return x[a];
          }
        for (int i = 1 ; i * i <= a ; i++){
            if (a % i == 0){
                count += 2;
                if ( i * i == a){
                    count --;
                }
            }
        }
        x[a] = count ;
        return count;
    }
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        long long a , b, c , ans = 0 ;
        cin >> a >> b >> c;
        long long MOD = 1073741824 ;
        for (int i = 1 ; i <= a ; i++){
            for (int j = 1 ; j <= b ; j++){
                for (int k = 1 ; k <= c ; k++){
                    ans += d(i * j * k);
                }
            }
        }
        cout << ans % MOD;
        return 0;
    }

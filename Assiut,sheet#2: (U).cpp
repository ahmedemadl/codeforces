    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        ll N, A, B, sum = 0;
        cin >> N >> A >> B;
     
        for(int i = 1 ; i <= N ; i++){
            int current = 0;
            ll n = i;
            while(n > 0){
                current += n % 10;
                n = n / 10;
            }
            
            if(A <= current && B >= current){
                sum += i;
            }
        } 
        cout << sum;
        return 0;
    }

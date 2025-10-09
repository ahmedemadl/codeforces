    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-10-08 13:34:11
    // Problem Name: B_Deck_of_Cards
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            int n,k;cin >> n >> k;
            char arr[n];
            for(int i = 0 ; i < n ;i++){
                arr[i]='+';
            }
            int zero=0,ones=0, two=0;
            while(k--){
                char op;cin >> op;
                if(op == '1'){
                    ones++;
                }else if(op == '0'){
                    zero++;
                }else{
                    two++;
                }
            }
            if(two == n - (zero+ ones)){
                for(int i = 0 ; i < n ; i++){
                    cout << '-';
                }
                cout << '\n';
            }else{
            for(int i = 0,j= n-1,a=zero, b=n-1-ones; i < n ;i++,j--,a++,b--){
                if(zero >0){
                    arr[i]='-';
                    zero--;
                }
                if(ones > 0){
                    arr[j]='-';
                    ones--;
                }
                if(two > 0){
                    if(arr[a] != '-'){
                        arr[a]='?';
                    }
                    if(arr[b] != '-'){
                        arr[b]='?';
                    }
                    two--;
                }
                if(zero == 0 && ones == 0 && two == 0){
                    break;
                }
     
            }
            for(int i = 0 ; i < n; i++){
                cout << arr[i];
            }
            cout << '\n';
            }
        }
        return 0;
    }

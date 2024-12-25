    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-12-25 21:46:09
    // Description : Junior Training Sheet V7.0
    // Problem Code: 363A
    // Problem Name: A_Soroban
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        string n;
        cin >> n;
        string s[10]= {"O-|-OOOO","O-|O-OOO","O-|OO-OO","O-|OOO-O","O-|OOOO-","-O|-OOOO","-O|O-OOO","-O|OO-OO","-O|OOO-O","-O|OOOO-"};
        for(int i = n.length()-1 ; i >= 0; i--){
            cout << s[n[i]- '0'] <<'\n';
        }
     
        return 0;
    }

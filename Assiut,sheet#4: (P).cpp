    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-08 22:46:25
    // Problem Name: P_Count_Words
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    bool isalpha(char s){
        if( (s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z') ){
            return 1;
        }
        else{
            return 0;
        }
    }
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        string s;getline(cin, s);
        int count{};
        bool flag= 0;
            for(int i = 0 ; i < s.size() ; i++){
                if(isalpha(s[i])){
                    if(flag == 0){
                        count ++;
                        flag = 1;
                    } 
                }
                else{
                    flag = 0;
                }
            }
     
        cout << count;
     
        return 0;
    }

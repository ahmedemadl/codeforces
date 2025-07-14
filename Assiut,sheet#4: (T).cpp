    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-09 03:44:26
    // Problem Name: T_URL
    // Learned     : None
    // The time complexity is O(2n) which is simplified to O(n) where n is the size of the string s
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        string s;
        getline(cin,s);
        bool flag = 0, flag2 =0, flag3 = 0, flag4=0, flag5 =0;
        string username="",pwd="", profile="", role="", key="";
     
        for(int i= 0 ; i < s.size() ; i++){  
            if(flag == 1){           
                while(s[i] != '&'){
                    username+=s[i];
                    i++;
                }
                flag2=1;
                flag = 0;
                i+=4;
            }
            else if(flag2 == 1){
                while(s[i] != '&'){
                    pwd+=s[i];
                    i++;
                }
                flag3=1;
                flag2=0;
                i+=8;
            }
            else if(flag3 ==1){
                while(s[i] != '&'){
                    profile+=s[i];
                    i++;
                }
                flag4=1;
                flag3=0;
                i+=5;
            }
            else if(flag4 == 1){
                while(s[i] != '&'){
                    role+=s[i];
                    i++;
                }
                flag5=1;
                flag4=0;
                i+=4;
            }
            else if(flag5 == 1){
                while(i != s.size()){
                    key+=s[i];
                    i++;
                }
                break;
                
            }
     
            if(s[i] == '?'){
                flag = 1;
                i+=9;
            }
     
        }
        cout << "username: " << username << '\n';
        cout << "pwd: " << pwd << '\n';
        cout << "profile: " << profile << '\n';
        cout << "role: " << role << '\n';
        cout << "key: " << key ;
     
        return 0;
    }

    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-07-06 18:08:35
    // Description : Junior Training Sheet V7.0
    // Problem Code: 102B
    // Problem Name: B_Sum_of_Digits
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        string s ;
        int count=0,maxi;
        cin >> s ;
        int tmp = s.length();
        for(int i = 0 ; i<tmp; i++){
            maxi=0;
            if(s.length() > 1){
                for(int j = 0 ; j<s.length(); j++){
                    maxi+=(s[j]-'0');
                }
                count++;
                s = to_string (maxi);
            }
            else {
                break;
            }
     
        }
        cout << count;
        return 0;
    }

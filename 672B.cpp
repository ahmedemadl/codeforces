    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-11-12 14:09:43
    // Description : Junior Training Sheet V7.0
    // Problem Code: 672B
    // Problem Name: B_Different_is_Good
    // Learned     : map
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n, count = 0;
        string s;
        cin >> n >> s;
        if (n > 26){
            cout << "-1";
            return 0;
        }
        map<char,bool> mymap ;
     
        for (int i = 0 ; i < n ; i++){
            if(mymap[s[i]] == 0){
                mymap [s[i]] = 1;
            }
            else{
                count ++;
            }
        }
      
     
        cout << count;
     
        return 0;
    }

    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-07-05 15:49:50
    // Description : Junior Training Sheet V7.0
    // Problem Code: 
    // Problem Name: A_BowWow_and_the_Timetable
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        string s;
        cin >> s;
        int extra=0;
        for(int i = 1 ; i < s.size() ; i++){
            if(s[i] == '1'){
                extra =1;
                break;
            }
        }
        if(s.size() % 2 == 0) extra =0;
        cout << (s.size())/2 +extra;
     
        return 0;
    }

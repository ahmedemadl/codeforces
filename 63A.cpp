//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-12-11 23:30:18
// Description : Junior Training Sheet V7.0
// Problem Code: 63A
// Problem Name: A_Sinking_Ship
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    string s1, s2;
    vector <string> rat , woman_child , man, captain ;
    for(int i = 0 ; i < n ; i++){
        cin >> s1 >> s2;
        if(s2 == "woman" || s2 == "child"){
            woman_child.push_back(s1);
        }
        else if(s2 == "rat"){
            rat.push_back(s1);
        }
        else if(s2 == "man"){
            man.push_back(s1);
        }
        else if(s2 == "captain"){
            captain.push_back(s1);
        }

    }
    
        for(string s : rat){
            cout << s << endl;
        }
        for(string s : woman_child){
            cout << s << endl;
        }
        for(string s : man){
            cout << s << endl;
        }
        for(string s : captain){
            cout << s << endl;
        }


    return 0;
}

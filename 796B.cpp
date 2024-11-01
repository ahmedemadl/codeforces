    // Author      : ahmedgbr367
    // Date        : 2024-11-01 15:27:44
    // Description : Junior Training Sheet V7.0
    // Problem Code: 796B
    // Problem Name: B_Find_The_Bone
    // Learned     : set
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n, m, k, num1 , num2, pos = 1;
        cin >> n >> m >> k;
        bool check = 0;
     
        set<int> arr;
        for(int i = 0 ; i < m ; i++){
            cin >> num1;
            arr.insert(num1);
        }
     
            if(arr.count(pos)){
            cout << pos;
            return 0;
        }
     
        for(int i = 0 ; i < k ; i ++){
            cin >> num1 >> num2;
            
            if(num1 == pos){
                check = 1;
     
                pos = num2;
            }
            else if (num2 == pos){
                pos = num1;
                check = 1;
            }
     
            if(check == 1 && arr.count(pos)){
                cout << pos;
                return 0;
            }
         
            check = 0;
            
        }
        cout << pos;
     
        return 0;
    }

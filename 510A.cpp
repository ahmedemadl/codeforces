    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-10-30 23:47:26
    // Description : Junior Training Sheet V7.0
    // Problem Code: 510A
    // Problem Name: A_Fox_And_Snake
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n , m;
        cin >> n >> m;
        int check = 0;
        for(int i = 0 ; i < n ; i++ ){
           if( i % 2 != 0){
            check++;
           }
            for(int j = 0 ; j < m ; j++){
                if(i % 2 == 0){
                cout << "#"; 
                }
                else{
                    
                    if(j == m-1 && check % 2 != 0){
                        cout << "#";
                    }
                    else if(j == 0 && check % 2 == 0){
                        cout << "#";
                    }
                    else{
                    cout << ".";
                    }
                }
            }
            cout << endl;
        }
     
        return 0;
    }


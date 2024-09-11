    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-09-11 14:17:08
    // Description : Junior Training Sheet V7.0
    // Problem Code: 614B
    // Problem Name: B_Gena_s_Code
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n;
        string not_beautiful ="1";
        long long zeros  = 0 ;
        cin >> n;
        string num;
        for (int i = 0 ; i < n ; i++){
            bool check = 0;
            cin >> num;
            if (num[0] == '0'){
                cout << 0;
                return 0;
            }

            if ( num[0] != '1'){
            not_beautiful = num;
            check = 1;
            }

            for (int j = 1 ; j < num.length(); j++){
                if (num [j] != '0'){
                    not_beautiful = num;
                    check = 1;
                }
            }

            if (check == 0){
                zeros += num.length()-1;
            }

          
        }

        cout << not_beautiful;

        for(int i = 0 ; i < zeros ; i++){
            cout << "0";
        }
        return 0;
    }

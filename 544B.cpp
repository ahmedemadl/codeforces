    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-08-30 15:54:27
    // Description : Junior Training Sheet V7.0
    // Problem Code: 544B
    // Problem Name: B_Sea_and_Islands
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        short n , k, formula;
        bool check = 0;
        cin >> n >> k;
        if ( n % 2 == 0 ){
            formula = n/2 *n;
        } 
        else{
            formula = ((n-1)/2)*n+(n+1)/2;
        }
        if(formula < k){
            cout << "NO";
            return 0;
        }
        else{
            cout << "YES" << endl;
            for (short i = 0 ; i < n ; i++){
                if (n % 2 == 0 ){
                if (check == 0 && i > 0){
                    check = 1;
                }
                else{
                    check = 0;
                }
                }
                for(short j = 0 ; j < n ; j++){
                    if(check == 0 && k > 0){
                    cout << "L";
                    check = 1;
                        k--;
                    }
                    else if (check == 1){
                        cout << "S";
                        check = 0;
                    
                    }
                    else{
                        cout << "S";
                    }
                }
                cout << endl;
            }
        }
        return 0;
    }

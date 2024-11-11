    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-11-11 21:49:40
    // Description : Junior Training Sheet V7.0
    // Problem Code: 129A
    // Problem Name: A_Cookies
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n;
        cin >> n;
        int num_of_odd = 0, num_of_even = 0;
        
        for(int i =0 ; i < n ; i++){
            int a;
            cin >> a;
            if(a % 2 == 0){
                num_of_even ++;
            }
            else{
                num_of_odd++;
            }
        }
        
        if(num_of_odd % 2 == 0){
            cout << num_of_even;
        }
        else{
            cout << num_of_odd;
        }
     
        return 0;
    }

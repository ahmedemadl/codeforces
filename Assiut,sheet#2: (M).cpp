    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2/7/2024
    // Description : Junior Training Sheet V7.0
    // Problem Type: M
    // Problem No. : 219432
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        int a,b;
        int not_lucky=0;
        cin >>a>>b;
        for (int i =a;i<=b;i++){
          int digit;
          bool check =0;
          int n =i;
          
          while (n !=0){
            digit = n%10;
            n/=10;
            if(digit != 4 && digit != 7){
              check = 1;
            }
            
          }
          if (check ==0){
            cout << i <<" ";
            not_lucky=1;
          }
          
        }
        if(not_lucky == 0){
          cout <<"-1";
        }
        return 0;
    }

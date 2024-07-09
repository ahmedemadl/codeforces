    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-07-09 02:03:46
    // Description : Junior Training Sheet V7.0
    // Problem Code: 78B
    // Problem Name: B_Easter_Eggs
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
     
        int n,j = -1;
        cin >> n;
        char array[7]={'R','O','Y','G','B','I','V'};
        
        int range1 = n/7 ;
        int range2 = n%7;
        
        for (int i = 0 ; i < range1*7 ;i++){
            if (j<6){
            j++;
            }
            else{
                j=0;
            }
            cout <<array[j];
        }
        j=2;
        
        for (int i = 0 ; i < range2 ;i++){
            if (j<6){
            j++;
            }
            else{
                j=3;
            }
            cout <<array[j];
        }
        
     
     
        return 0;
    }

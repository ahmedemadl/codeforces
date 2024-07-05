    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-07-05 16:34:59
    // Description : Junior Training Sheet V7.0
    // Problem Code: 1237A
    // Problem Name: A_Balanced_Rating_Changes
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n,num,num2;
        bool check = 0;
        cin >> n;
        int x[n];
        for (int i =0 ; i<n ; i++){
            cin >> x[i];
            if (x[i]%2 == 0){
                cout << x[i]/2<<endl;
            }
            else {
                  if (x[i]>0){
                        num = 1;
                        num2 = 0;
     
                    }
                    else{
                        num = 1;
                        num2= -1;
                    }
                if (check == 1 ){
                  
                    cout<< (x[i]+num)/2 << endl; //increase by 1
                    check = 0;
                }
                else {
                    cout << (x[i]+num2)/2 << endl; //decrese by 1
                    check = 1;
                }
            }
        }
     
     
        return 0;
    }


    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 4/7/2024
    // Description : Junior Training Sheet V7.0
    // Problem Type: A
    // Problem No. : 699
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
      int n,min=numeric_limits<int>::max();
      cin >> n;
      char dir[n];
      int pos[n],first_position;
      bool check =0;
      
      for (int i=0;i<n;i++){
        cin>> dir[i];
      }
      for(int i=0;i<n;i++){
        cin>> pos[i];
      }
      for(int i=0;i<n;i++){
        if(dir[i] == 'R'){
          first_position= pos[i]; 
          check =1;
        }
        if(check == 1 && dir[i] == 'L'){
          
          if(min > ((pos[i]-first_position)/2)){
            min = ((pos[i]-first_position)/2);
          }
          check=0;
        }
      }
     
      if (min < numeric_limits<int>::max()){
        cout << min;
      }
      else {
        cout <<"-1";
      }
      
        return 0;
    }

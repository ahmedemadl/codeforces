    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
      int n ,num ; 
      cin >> n; 
      for (int i = 0 ; i < n ; i++){
        cin >> num ;
        if (num > 0)
          num = 1;
        else if(num < 0 )
          num = 2;
        cout << num << " ";
      }
        return 0;
    }

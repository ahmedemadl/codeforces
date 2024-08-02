    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
      int n , count = 0 ;
      cin >> n;
      int x[n];
      for (int i = 0 ; i < n && cin >> x[i]; i++){}
      sort(x, x+n );
      int minimum  = x[0];
      for (int i = 0 ; i < n ;i++){
        if (x[i] == minimum){
          count ++;
        }
        else{
          if (count %2 == 0){
            cout << "Unlucky";
            return 0;
          }
          else {
            cout << "Lucky";
            return 0;
          }
        }
      }
    }

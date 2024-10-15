    #include <bits/stdc++.h>
    using namespace std;
     
    void Recursion(int n){
        if( n == 0){
            return;
        }
     
        if(n >= 10){
            Recursion(n / 10);
        }
        
        cout << n % 10 << " ";
    }
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int T ;
        cin >> T;
        while( T-- ){
            int n;
            cin >> n;
     
            if(n == 0){
                cout << "0";
            }
            else{
            Recursion(n);
            }
            cout << endl;
     
        }
     
        return 0;
    }

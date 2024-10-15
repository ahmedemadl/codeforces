    #include <bits/stdc++.h>
    using namespace std;
     
    void Recusion(int n){
        if(n == 0){
            return;
        }
        cout << n ;
        if(n > 1){
            cout << " ";
        }
        return Recusion(n-1);
    }
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n;
        cin >> n;
        
        Recusion(n);
        return 0;
    }

    #include <bits/stdc++.h>
    using namespace std;
     
    void Recusion(int n, int current){
        if(n == 0){
            return;
        }
        cout << current << endl;
        return Recusion(n-1, current+1);
    }
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n;
        cin >> n;
        
        Recusion(n, 1);
        return 0;
    }

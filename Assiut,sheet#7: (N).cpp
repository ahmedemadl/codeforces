    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    void Recursion(int A[],int B[],int i,int n, int C){
        if(i == n){
            return;
        }
        
        cout << A[i]+B[i] << " ";
        if((i+1) % C == 0){
            cout << endl;
        }
        Recursion(A, B, i+1, n, C);
    }
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int R, C;
        cin >> R >> C;
        int n = (R*C);
        int A[n], B[n];
        for(int i = 0 ; i < n ; i++){
            cin >> A[i];
        }
        for(int i = 0 ; i < n ; i++){
            cin >> B[i];
        }
        Recursion(A , B , 0, n, C);
     
        return 0;
    }

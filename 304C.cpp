    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-10-09 06:38:18
    // Description : Junior Training Sheet V7.0
    // Problem Code: 304C
    // Problem Name: C_Lucky_Permutation_Triple
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n;
        cin >> n;
        
        int A[n], B[n], C[n];
        if( n % 2 == 0){
            cout << -1;
        }
        else{
            for (int i = 0 ; i < n ; i++){
                A[i] = i;
                cout << i << " ";
            }
            cout << endl ;
     
            for(int i = 1 ; i < n ; i++){
     
                B[i-1] = i;
                cout << i << " ";
            }
            B[n - 1] = 0;
            cout << B[n-1] << endl;
     
            for (int i = 0 ; i < n ; i++){
     
                cout << (A[i] + B[i]) % n << " ";
            }
        }
     
     
        return 0;
    }

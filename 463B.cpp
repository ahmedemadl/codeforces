    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-07-06 17:44:26
    // Description : Junior Training Sheet V7.0
    // Problem Code: 463B
    // Problem Name: B_Caisa_and_Pylons
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n,maxi=0;
        cin >>n;
        int x[n];
        for (int i =0 ; i < n ; i++){
            cin >> x[i];
            if (x[i]>maxi){
                maxi = x[i];
            }
        }
        cout << maxi;
        return 0;
    }

    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-07-10 22:10:06
    // Description : Junior Training Sheet V7.0
    // Problem Code: 492B
    // Problem Name: B_Vanya_and_Lanterns
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n,l,d;
        double maxi=0;
        cin >> n >> l;
        int x[n];
     
        for (int i = 0 ; i < n ; i++){
            cin >> x[i];
        } 
        sort(x,x+n);
     
           for (int i = 0 ; i < n ; i++){
            if (i > 0){
                d =  x[i]-x[i-1];
                if (maxi < d ){
                    maxi = d;
                }
            }
        } 
        maxi = maxi/2.0;
        maxi = max (maxi,(double) x[0]);
        maxi = max (maxi,(double) l-x[n-1]);
     
         cout << fixed << setprecision(10) << maxi << endl;
        return 0;
    }

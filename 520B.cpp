    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-08-20 12:11:05
    // Description : Junior Training Sheet V7.0
    // Problem Code: 520B
    // Problem Name: B_Two_Buttons
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n , m, count = 0;;
        cin >> n >> m;
        if(n >= m){
            cout << n-m;
            return 0;
        }
        while(n < m){
            if( m % 2 == 1 ){
                m++;
                count++;
            }
            else {
                m/= 2;
                count++;
            }
        }
        count += (n-m);
     
        cout << count;
        return 0;
    }

    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-12-08 23:22:14
    // Description : Junior Training Sheet V7.0
    // Problem Code: 248A
    // Problem Name: A_Cupboards
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n;
        cin >> n;
        int zerocount1=0 ,onecount1=0, zerocount2= 0, onecount2= 0;
        for(int i = 0 ; i < n;  i++){
            int num1, num2;
            cin >> num1 >> num2;
            num1 == 0 ? zerocount1++ : onecount1++;
            num2 == 0 ? zerocount2++ : onecount2++;
        }
        int ans = min(zerocount1,onecount1) + min(zerocount2,onecount2);
        cout << ans;
     
        return 0;
    }

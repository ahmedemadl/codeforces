    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-07-09 19:17:08
    // Description : Junior Training Sheet V7.0
    // Problem Code: 746B
    // Problem Name: B_Decoding
    // Learned     : الصبر
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        string s;
        int n,mid,count= -1,k;
        cin >> n; 
        cin >> s;
        char a[n];
        for (int i = s.length()-1 ; i >= 0 ; i --){
            count ++;
            a[count]= s[i];
            k = count ;
            double num = ceil ((count)/2);
            for(int j = 1; j <= ((count+1)/2) ; j ++){
                swap(a[k],a[k-1]);
                k--;
            }
        }
        for(int i = 0 ; i < n ; i++){
            cout << a[i];
        }
        return 0;
    }

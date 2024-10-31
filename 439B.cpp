    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-10-31 18:41:55
    // Description : Junior Training Sheet V7.0
    // Problem Code: 439B
    // Problem Name: B_Devu_the_Dumb_Guy
    // Learned     : sorting
    // Note : stop fucking makeing the same mistake ever and ever and use ll please you idiot 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n, x;
        ll answer = 0;
        cin >> n >> x;
        vector <ll> arr(n);
     
        for (int i = 0 ; i < n ; i++){
            cin >> arr[i];
        } 
     
        //sorting in increasing order
        sort(arr.begin(), arr.end());
     
        for(int i = 0; i < n ;i++){
            answer += (arr[i] *x);
            if(x > 1){
                x--;
            }
        }
        cout << answer;
        return 0;
    }

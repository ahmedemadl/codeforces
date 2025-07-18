    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-04 23:03:20
    // Problem Name: Z_Binary_Search
    // Learned     : Binary Search
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n, q;
        cin >> n >> q;
        int arr[n];
        for(int i = 0 ; i < n; i++){ 
            cin >> arr[i];
        }
     
        sort(arr,arr+n); // sorting the arr in increading order
        
        while(q--){
            int num;
            cin >> num;
            bool found = 0;
            int mid, l= 0, r= n-1;
            // Binary Search
            while(l<=r){
                mid = l + (r-l)/2; // To avoid overflow 
                if(arr[mid] == num){
                    cout << "found" << '\n';
                    found = 1;
                    break;
                }
                else if(num > arr[mid]){
                    l= mid+1;
                }
                else{
                    r=mid-1;
                }
            }
            if(found == 0){
                cout << "not found" << '\n';
            }
            
        }
     
        return 0;
    }

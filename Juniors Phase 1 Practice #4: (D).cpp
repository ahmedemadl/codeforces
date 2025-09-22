    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-05-10 16:17:47
    // Description : Junior Training Sheet V7.0
    // Problem Code: 165B
    // Problem Name: B_Burning_Midnight_Oil
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    ll n , k;
    int can( ll mid){
        ll sum = 0, i = 0;
        while(true){       
            ll num = mid/pow(k,i);
            sum +=num;
            i++;
            if(num == 0){
                break;
            }
        }
        return sum>=n;
    }
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        cin>>n>>k;
        ll l=1,r=n, mid,ans;
        while(l<=r){
            mid = l+((r-l)/2); // شغل عالى عشان avoid overflow اصحى للكلام
            if(can(mid)){
                r=mid-1;
                ans=mid;
            }
            else{
                l=mid+1;
            }
        }
        cout <<ans;
        return 0;
    }

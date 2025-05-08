//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-05-07 04:36:10
// Description : Junior Training Sheet V7.0
// Problem Code: 1201C
// Problem Name: C_Maximum_Median
// Learned     : advanced binary search
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,a[200005];
bool can(ll mid){
    ll sum=0;
    for(int i = n/2 ; i < n ; i++){
        if(a[i] < mid){
            sum+=mid-a[i];
        }
    }
    return sum<=k;
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    ll l=a[n/2],r=a[n/2]+k,ans=a[n/2];
    while(l<=r){
        ll mid= (l+r)/2;
        if(can(mid)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }  
    }

    cout <<ans;
    return 0;
}

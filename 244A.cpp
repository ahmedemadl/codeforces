    #include<bits/stdc++.h>
    using namespace std ;
    int main() {
        int n,k,cnt=0,d;
       vector<int>v;
       cin>>n>>k;
       for(int i=1;i<=(n*k);i++){
        v.push_back(i);
       }
       int a[1000];
       for(int i=0;i<k;i++){
        cin>>a[i];
        v.erase(remove(v.begin(), v.end(), a[i]), v.end());
       }
       for(int i=0;i<k;i++){
        cout<<a[i]<<" ";
        for(int i=0+cnt;i<cnt+n-1;i++){
        cout<<v[i]<<" ";
     
       }
       cout<<endl;
       cnt+=n-1;
    }
    }
     

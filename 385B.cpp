//=====================================================
// Author      :  Learn for learn in youtube
// Date        : 2024-08-12 23:33:42
// Description : Junior Training Sheet V7.0
// Problem Code: 385B
// Problem Name: B_Bear_and_Strings
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
        string s;
        vector <int>v;
        cin>>s;
        long long n=s.size(),x=1,y,ans=0;
        for(int i=0;i+3<n;i++)
            if(s[i]=='b'&&s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='r')
                v.push_back(i+1);
        for(int i=0;i<v.size();i++)
        {
            y=n-v[i]-2;
            if(i)
                x=v[i-1]+1;
            x=v[i]-x+1;
            ans+=(x*y);
        }
        cout<<ans<<endl;
        return 0;
    }
     

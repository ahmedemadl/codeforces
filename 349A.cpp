
 #include<bits/stdc++.h>
using namespace std;
 
int main(){
    double d,h,v,e;
    cin>>d>>h>>v>>e;
    double r   = (d/2);
    double pi = 2*acos(0.0);
    double a = (pi)*(r)*(r)*(h);
    double rem = ((v)/a)-e;
    double ans = 1/(rem);
    if(ans<0 || ans>1000){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<fixed<<setprecision(12)<<ans<<endl;
    }
    }

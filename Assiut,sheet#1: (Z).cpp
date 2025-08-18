    // Online C++ compiler to run C++ program online
    #include <iostream>
    using namespace std;
    int main() {
       long long a,b,c,d,z;
       cin>>a>>b>>c>>d;
       a=a%100;
       b=b%100;
       c=c%100;
       d=d%100;
       z=(a*b*c*d)%100;
       if(z<10){
       cout<<0<<z;}
       else{
       cout<<z;}
     
        return 0;
    }

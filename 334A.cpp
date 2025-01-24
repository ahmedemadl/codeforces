#include <iostream>
#include<bits/stdc++.h>
#include<string.h> 
#define ll long long
using namespace std;
int main(){
int n; cin>>n;
int i=1,j=n*n;
for (int l=0; l<n;l++){
    for(int k=0; k<n/2;k++, i++,j--){
    cout<<i<<" "<<j<<" "; 
    }
    cout<<endl;
}
return 0;
}

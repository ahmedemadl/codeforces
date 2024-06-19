#include <iostream>

using namespace std;

int main() {
  int n,distress_kids=0;
  double x;
  long long icecream_packs;
  cin >> n >> x;
  icecream_packs=x;
  for (int i = 0; i < n; i++) {
     char sign;
     double d;
     cin>> sign >> d;

     if(sign == '+'){
       icecream_packs+=d;
     }
     else {
       if(icecream_packs >= d){
         icecream_packs-=d;
       }
       else{
         distress_kids++;
       }
         
     }
    
  }
  
  cout<<icecream_packs<<" "<<distress_kids;
   return 0;
}

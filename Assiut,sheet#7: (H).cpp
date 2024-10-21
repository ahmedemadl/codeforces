#include <bits/stdc++.h>
using namespace std;
void Recursion(short N, int i, short empty_space){
  
    if( N == 0 ){ // Base case
        return;
    }

    
    for(short j = 1 ; j <= (empty_space) ; j++){
        cout << " ";
    }
    for(short j = 1 ; j <= i; j++){
        cout << "*";
    }
    cout << endl;
     Recursion(N - 1, i - 2,empty_space+1);
}
int main(){
    short N;
    cin >> N;
    Recursion(N, (N*2)-1, 0);
}

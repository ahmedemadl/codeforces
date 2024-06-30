//=====================================================
// Author      : ahmedgbr367
// Date        : 29/6/2024
// Description : Junior Training Sheet V7.0
// Problem Type: A
// Problem No. : 143
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    int r1,r2,c1,c2,d1,d2;
    int A,B,C,D;
    bool found= false;
    cin>> r1 >>r2>>c1>>c2>>d1>>d2;
    for (int i =1; i<=9;i++ ){
        A=i;
        if( (((r1-A)+(c1-A)) == d2) && (((r1-A)+(d1-A)) == c2) && (((c1-A)+(d1-A)) == r2)){
            found=true;
        break;
        i=10;
    }
    }
    B=(r1-A);
    C=(c1-A);
    D=(d1-A);
    
    if ( A == B || A ==C || A== D || B ==C || B== D ||C == D ){
        cout << "-1";
        return 0;
    }
    if (found && 0<B && B <= 9 && 0<C && C<=9  && 0<D &&  D<=9 ){

    cout << A <<" "<< B << endl << C << " "<< D ;
    }
    else {
        cout << "-1";
    }
    return 0;
}

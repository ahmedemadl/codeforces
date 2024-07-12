//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-07-12 07:40:54
// Description : Junior Training Sheet V7.0
// Problem Code: 451B
// Problem Name: B_Sort_the_Array
// Learned     : i discovered that i'm a genuis
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,num1=0,num2=0;
    cin >> n ;
    int x[n+2];
    bool check=0, check2=0;
    //one based
    x[0]=0;
    x[n+1] = numeric_limits<int>::max() ;
    for (int i = 1 ; i < n+2 ; i++){
        cin >> x[i];
        if(x[i] < x[i-1] && check == 0 && check2 == 0){
            num1 = i-1;
            check = 1;
        }
        if (check == 1 && x[i] > x[i-1] && check2 == 0){
            num2= i-1;
            check2 = 1;
            check = 0;

             if ( x[i] < x[num1] || x[i-1] < x[num1-1]){
                cout << "no";
                return 0;
            }
        }
        if (check2 == 1 && x[i] < x[i-1]){
            cout << "no";
            return 0;
        }

    }

    if (num1 == 0 || num2 == 0){
        cout << "yes" << endl << "1 1";
        return 0;
    }
    
    cout << "yes" << endl << num1 << " "<< num2;

    return 0;
}

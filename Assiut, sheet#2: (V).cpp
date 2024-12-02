    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        short n, m = 0;
        cin >> n;
     
        for (short i = 0 ; i < n ; i++){
            m++;
            for(short j = 0 ; j < 3; j++){
                cout << m << " ";
                m++; 
            }
            cout <<"PUM"<<endl;
        }
     
        return 0;
    }

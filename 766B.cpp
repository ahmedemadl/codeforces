    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-07-15 11:07:09
    // Description : Junior Training Sheet V7.0
    // Problem Code: 766B
    // Problem Name: B_Mahmoud_and_a_Triangle
    // Learned     : turns out the sum should be bigger than the thrid num and not allowed to be equal to it , the math teacher was wrong and i am right ;)
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n;
        cin >> n;
        double sum;
        int x[n];
        for (int i = 0 ; i < n ; i++){
            cin >> x[i];
        }
        sort(x,x+n);
        for (int i = 0 ; i < n-2 ; i++){
            sum = x[i] + x[i+1];
            for (int j = i+2 ; j < n ; j++){
                if(sum > x[j]){
                    cout << "YES";
     
                    return 0;
                }
            }
        }
        cout << "NO";
        return 0;
    }

//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-09-08 22:47:22
// Description : Junior Training Sheet V7.0
// Problem Code: 493B
// Problem Name: B_Vasya_and_Wrestling
// Learned     : lexicographically 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, num;
    bool check_first = 0;
    long long first_sum = 0, second_sum = 0;
    vector <int> first;
    vector <int> second;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        cin >> num;
        if (num > 0){
            first.push_back(num);
            first_sum += num;
            check_first = 1;
         }
        else{
            second.push_back(-num);
            second_sum += (-num);
            check_first = 0;
        }
    }
    if(first_sum > second_sum){
        cout << "first";
    }
    else if (first_sum < second_sum){
        cout << "second";
    }
    else{
        if(first == second){
            if (check_first == 1 ){
                cout << "first";
            }
            else{
                cout <<"second";
            }
        }
        else{
            if(first > second){
                cout << "first";
            }
            else{
                cout << "second";
            }   
        }
    }

    return 0;
}

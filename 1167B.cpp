//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-05-14 09:33:49
// Description : Junior Training Sheet V7.0
// Problem Code: 1167B
// Problem Name: B_Lost_Numbers
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    map <int, pair<int,int>> mp;
    int a[7]={0, 4, 8, 15, 16, 23, 42};
    for(int i = 1; i <= 5 ; i++){
        for(int j = i+1 ; j <= 6 ; j++){
            int mul = (a[i]*a[j]);
            mp[mul]={a[i],a[j]};
        }
    }

    int ans[6];

    int res;
    cout << "? 1 2" << endl;
    cout.flush();
    cin >>res;
    int num1 = mp[res].first;
    int num2 = mp[res].second;
    cout << "? 2 3"<< endl;
    cout.flush();
    cin >>res;
    int num3 = mp[res].first;
    int num4 = mp[res].second;

    if(num1 == num3){
        swap(num1,num2);
    }
    else if(num1 == num4){
        swap(num1,num2);
        swap(num3,num4);
    }
    else if(num2 == num4){
        swap(num3,num4);
    }
    ans[0]=num1;
    ans[1]=num2;
    ans[2]=num4;
    
    cout << "? 4 5"<< endl;
    cout.flush();
    cin >>res;
    int num5 = mp[res].first;
    int num6 = mp[res].second;
    cout << "? 5 6"<<endl;
    cout.flush();
    cin >>res;
    int num7 = mp[res].first;
    int num8 = mp[res].second;

    if(num5 == num7){
        swap(num5,num6);
    }
    else if(num5 == num8){
        swap(num5,num6);
        swap(num7,num8);
    }
    else if(num6 == num8){
        swap(num7,num8);
    }
    
    
    ans[3]=num5;
    ans[4]=num6;
    ans[5]=num8;
   
    cout << "! ";
    for(int i = 0 ; i < 6 ; i++){
        cout << ans[i] << ' ';
    }
    return 0;
}

//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-22 21:47:49
// Problem Name: B_New_Year_and_Buggy_Bot
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, m;
char arr[51][51];
pair<int,int> pos;
bool valid(string ins, string mp, pair<int,int> pos){
    // s1 = up, s2 = down, s3 = right , s4 = left
 
    for(int i = 0 ;i < ins.size();i++){
        if(ins[i] == mp[0]){
            if(pos.first -1 < 0) return false;
            pos.first -=1;
        }else if(ins[i] == mp[1]){
            if(pos.first +1 == n) return false;
            pos.first +=1;
        }else if(ins[i] == mp[2]){
            if(pos.second +1 == m) return false;
            pos.second +=1;
        }else if(ins[i] == mp[3]){

            if(pos.second - 1 < 0) return false;
            pos.second -=1;
        }
        if(arr[pos.first][pos.second] == 'E') return true;

        else if(arr[pos.first][pos.second] == '#') return false;
    }
    return false;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    
    for(int i = 0;i < n;i++){
        for(int j = 0 ;j < m; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 'S'){
                pos = {i,j};
            }
        }
    }

    string ins; cin >> ins;
    string mp="0123";
    int count = 0;

    do{ 
        if(valid(ins, mp, pos)) count++;

    }while (next_permutation(mp.begin(), mp.end()));
    cout << count;
    
    return 0;
}

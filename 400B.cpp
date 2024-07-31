//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-07-31 16:37:31
// Description : Junior Training Sheet V7.0
// Problem Code: 400B
// Problem Name: B_Inna_and_New_Matrix_of_Candies
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
void removeDuplicates(vector<int>& x){
    // Use a set to store unique elements
    set<int> uniqueElements(x.begin(), x.end());
     
    //clear the orginal array and insert the unique elements back
    x.assign(uniqueElements.begin(), uniqueElements.end());
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n , m , pos1 , pos2;
    cin >> n >> m;
    char cell;
    vector<int> x;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            cin >> cell;
            if (cell == 'G'){
                pos1 = j;
            }

            if(cell == 'S'){
                pos2 = j;
            }   
        }
        if (pos1 > pos2){
            cout << "-1";
            return 0;
        }
        else{
            int num = (pos2-pos1)+1; 
            x.push_back(num);
        }
    }
    removeDuplicates(x);
    cout << x.size(); 
    return 0;
}

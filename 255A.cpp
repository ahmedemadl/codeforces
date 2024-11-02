    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2024-11-02 03:34:29
    // Description : Junior Training Sheet V7.0
    // Problem Code: 255A
    // Problem Name: A_Greg_s_Workout
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int n, num, j = 1;
        cin >> n;
        ll chest = 0 , biceps = 0 , back = 0;
       
        for(int i = 0 ; i < n ; i++){
            int num;
            cin >> num;
            if(j == 1){
                chest += num;
                j++;
            }
            else if ( j == 2){
                biceps += num;
                j++;
            }
            else{
                back += num;
                j = 1;
            }
            
        }
        int maxi = max({chest, biceps , back});
        if ( chest == maxi){
            cout << "chest";
        }
        else if ( biceps == maxi){
            cout << "biceps";
        }
        else{
            cout << "back";
        }
     
        return 0;
    }

    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-10-21 14:00:48
    // Problem Name: E_MAX_MEX_Cut
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            int n; cin >> n;
            string s1, s2, s3=""; cin >> s1 >> s2;
            int count=0;
            for(int i = 0 ; i < n; i++){
                if((s1[i] == '0'&& s2[i] == '1') || (s1[i] == '1' && s2[i] == '0')){
                    s3+='2';
                    count += 2; 
                }else if(s1[i] == '1' && s2[i] == '1'){
                    s3+= '0';
                }else if(s1[i] == '0' && s2[i] == '0'){ // 0 0
                    count+=1;
                    s3+= '1';
                }
            }
     
            bool flag = 0;
            for(int i = 0 ; i < n; i++){
                if(flag) i++;
                flag = 0;
                if(s3[i] == '0'){
                    if(i == 0){
                        if(s3[i+1] == '1'){
                            count++;
                            s3[i+1]= '2';
                            flag=1;
                        }
                    }else if(i == n-1){
                        if(s3[i-1] == '1'){
                            count++;
                        }
                    }else{
                        if(s3[i-1] == '1'){
                            count++;
                        }else if(s3[i+1] == '1'){
                            count++; 
                            flag=1;
                            s3[i+1]='2';
                        }
                    }
                }
            }
     
            cout << count<< '\n';
     
        }
        return 0;
    }//    0 1 0
    //i=2  2
    // 3  4

    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        int a , b, answer;
        char s;
        cin >> a >> s >> b;
     
        if ( s == '+'){
            answer = a + b;
        }
        else if ( s == '-'){
            answer = a - b;
        }
        else if ( s == '/'){
            answer = a / b;
        }
        else if ( s == '*'){
            answer = a * b;
        }
     
        cout << answer;
     
        return 0;
    }

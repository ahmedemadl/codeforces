    // chat GPT solution
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
     
        string s; 
        cin >> s;
     
        int a[130];
        for(int i = 'a'; i <= 'z'; i++){
            cin >> a[i];
        }
     
        bool allq = 1;
        for(char c : s) if(c != '?') allq = 0;
        if(allq){
            cout << 0 << "\n";
            for(int i = 0; i < (int)s.size(); i++) cout << 'a';
            return 0;
        }
     
        if(s[0] == '?'){
            char right; int end = -1;
            for(int i = 1; i < (int)s.size(); i++){
                if(s[i] != '?'){ right = s[i]; end = i-1; break; }
            }
            int bestCost = INT_MAX; char bestChar = 'a';
            for(char c = 'a'; c <= 'z'; c++){
                int cost = abs(a[c] - a[right]);
                if(cost < bestCost){ bestCost = cost; bestChar = c; }
            }
            for(int i = 0; i <= end; i++) s[i] = bestChar;
        }
     
        if(s.back() == '?'){
            char left; int start = -1;
            for(int i = (int)s.size()-2; i >= 0; i--){
                if(s[i] != '?'){ left = s[i]; start = i+1; break; }
            }
            int bestCost = INT_MAX; char bestChar = 'a';
            for(char c = 'a'; c <= 'z'; c++){
                int cost = abs(a[c] - a[left]);
                if(cost < bestCost){ bestCost = cost; bestChar = c; }
            }
            for(int i = start; i < (int)s.size(); i++) s[i] = bestChar;
        }
     
        for(int i = 1; i < (int)s.size()-1; i++){
            if(s[i] == '?'){
                char left = s[i-1], right; int end = -1;
                for(int j = i+1; j < (int)s.size(); j++){
                    if(s[j] != '?'){ right = s[j]; end = j-1; break; }
                }
                int bestCost = INT_MAX; char bestChar = 'a';
                for(char c = 'a'; c <= 'z'; c++){
                    int cost = abs(a[left] - a[c]) + abs(a[right] - a[c]);
                    if(cost < bestCost){ bestCost = cost; bestChar = c; }
                }
                for(int k = i; k <= end; k++) s[k] = bestChar;
            }
        }
     
        ll totalCost = 0;
        for(int i = 0; i < (int)s.size()-1; i++){
            totalCost += abs(a[s[i]] - a[s[i+1]]);
        }
     
        cout << totalCost << "\n";
        cout << s << "\n";
     
        return 0;
    }


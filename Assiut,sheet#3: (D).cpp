    #include <iostream> 
    using namespace std;
     
    int main(){
        int n, x;
        cin >> n;
        for (int i = 0 ; i < n ; i++){
            cin >> x;
            if (x <= 10){
                cout << "A[" << i << "] = " << x << endl;
            }
        }
    return 0;
    }

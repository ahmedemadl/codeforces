    #include <iostream>
    using namespace std;
     
    int main()
    {
        short x, y ,z;
        char c,t;
        cin >>x>>c>>y>>t>>z;
        switch(c)
        {
            case '+':
            {
                if(x+y==z) cout<<"Yes";
                else cout<<x+y;
                break;
            }
            case'-':
            {
            if(x-y==z) cout<<"Yes";
            else cout<<x-y;
            break;
            }
            case'*':
            {
            if(x*y==z) cout<<"Yes";
            else cout<<x*y;
            break;
           }
        }
        
     
     
        return 0;
    }

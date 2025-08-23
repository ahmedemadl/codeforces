

    #include <iostream>
    using namespace std;
     
    int main()
    {
        short x, y;
        char c;
        cin >>x>>c>>y;
        switch(c)
        {
            case '=':
            {
                if(x==y) cout<<"Right";
                else cout<<"Wrong";
                break;
            }
            case'<':
            {
            if(x<y) cout<<"Right";
            else cout<<"Wrong";
            break;
            }
            case'>':
            {
            if(x>y) cout<<"Right";
            else cout<<"Wrong";
            break;
           }
        }
        
     
     
        return 0;
    }

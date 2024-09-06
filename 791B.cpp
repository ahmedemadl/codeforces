    #include<bits/stdc++.h>
    using namespace std;
    vector<vector<long long> >v;
    long long x,y,n,m,c;
    bool vis[150005];
    void dfs(int node)
    {
        vis[node]=1,x++;
        for(auto i:v[node])
        {
            y++;
            if(!vis[i])
                dfs(i);
        }
    }
    int main()
    {
        cin>>n>>m;
        v.resize(n+5);
        while(m--)
        {
            cin>>x>>y;
            x--,y--;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(long long i=1;i<=n;i++)
            if(!vis[i])
            {
                x=0,y=0,dfs(i);
                c = x*(x-1)/2;
                y/=2;
                if(y!=c)
                {
                    cout<<"NO\n";
                    return 0;
                }
            }
        cout<<"YES\n";
        return 0;
    }

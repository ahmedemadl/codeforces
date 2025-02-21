#include<bits/stdc++.h>
using namespace std;
int a[110];
int main()
{
	int n,k,ans=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	while(a[1]!=k)
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]<k&&a[i+1]!=a[i]) a[i]++; 
		}
		ans++;
	}
	cout<<ans;
	return 0;
}
 

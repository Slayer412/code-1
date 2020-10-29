#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;cin>>n;
	if(n%2==0)
	{	int f=0;
		int x1=n/2,x2=n/2;
		while(1)
		{
			if(x1+x2==n && x1%2==0 && x2%2==0)
			{	
			f=1;
			break;
			}
			else
			--x1,++x2;
			if(x1==0 || x2==n)
			break;
		}
		if(f)
		cout<<"YES";
		else
		cout<<"NO";
	}
	else
	cout<<"NO";
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}


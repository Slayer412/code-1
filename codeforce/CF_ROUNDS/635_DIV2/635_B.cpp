#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int h,n,m,f=1;
	cin>>h>>n>>m;
	if(h-10*m<=0)
	{
		cout<<"YES\n";
	}
	else
	{
	while(n--)
	{
		h=h/2+10;
		if(h-m*10<=0)
		{	
			h=0;break;
		}
	}
	if(h==0)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


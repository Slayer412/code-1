#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n,k;
	cin>>n>>k;
	//ll ele;
	vll a(n+1),b(n+1);
	a[0]=0;
	b[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b.begin(),b.end());
	for(int i=1;i<=k;i++)
	{	vll p,q;
		for(int j=i;j<=n;j+=k)
		{
			p.push_back(a[j]);
			q.push_back(b[j]);
		}
		sort(p.begin(),p.end());
		if(p!=q)
		{
			cout<<"no\n";
			return;
		}
	}
	cout<<"yes\n";
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}
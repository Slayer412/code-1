#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{	cin>>n;
	int cnt=0;
	for(int i=2;i*i<=n;i++)
	{
		while(n%i==0)
		n/=i,cnt++;
		while(n%(n/i)==0)
		cnt++,n=n/(n/i);
	}
	cout<<cnt<<' ';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{	int n;
	cin>>n;
	int cnt=0;
	for(int i=2;i*i<=n;i++)
	{
		while(n%i==0)
		n/=i,cnt++;
	}
	cout<<cnt<<' ';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


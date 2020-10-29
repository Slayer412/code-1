#include<bits/stdc++.h>
#define ll long long
using namespace std;
typedef  vector <int>   vi;
typedef  vector <ll>    vl;

void solve()
{
	int n;cin>>n;
	vl t(n),st(n);
	for(int i=0;i<n;i++)
	cin>>t[i];
	for(int i=0;i<n;i++)
	cin>>st[i];
	vl c(n);
	for(int i=0;i<n;i++)
	c[i]=t[i]-st[i];
	sort(c.begin(),c.end());
	ll cnt=0;
	for(int i=0;i<n;i++)
	{
		if(c[i]<=0)
		continue;
		int pos=lower_bound(c.begin(),c.end(),-c[i]+1)-c.begin();
		cnt += i-pos;
	}
	cout<<cnt<<'\n';
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}


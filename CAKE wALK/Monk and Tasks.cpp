#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool sortbysec(const pair<int,int> &a,const pair<int ,int> &b)
{
	return a.second<b.second;
}
void solve()
{
	int n;cin>>n;
	multimap < int, ll > mp;
	ll x;
	for(int i=0;i<n;i++)
	{	
		cin>>x;
		ll temp=x;
		int cnt=0;
		while ( temp )
		{
			temp=temp &(temp-1);
			cnt++;
		}
		mp.insert(make_pair(cnt,x));
	}
	for(auto x:mp)
	cout<<x.second<<" ";
	cout<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


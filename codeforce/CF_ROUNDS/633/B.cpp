#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{	int n;cin>>n;
	list <ll> l;
	vector<ll> vec(n);
	for(int i=0;i<n;i++)
	cin>>vec[i];
	sort(vec.begin(),vec.end());
	for(int i=0,j=n-1;i<=j;++i,--j)
	{
		if(i==j){
		l.push_front(vec[i]);
		break;
		}
		l.push_front(vec[i]);
		l.push_front(vec[j]);
		
	}
	for(auto i:l)cout<<i<<" ";	
	cout<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


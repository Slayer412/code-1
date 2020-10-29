#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;cin>>n;
	map <int,int> hash;
	int ele;
	set<int> s;
	int mx=0;
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		s.insert(ele);
		hash[ele]++;
		mx=max(mx,hash[ele]);
	}
	int x=min((int)s.size()-1,mx);
	int y=min((int)s.size(),mx-1);
	cout<<max(x,y)<<'\n';
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


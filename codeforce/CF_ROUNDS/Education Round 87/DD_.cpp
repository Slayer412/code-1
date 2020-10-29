#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{	int n,q;cin>>n>>q;
	multiset<int> s;
	int x;
	vi a(n+1);
	for(int i=0;i<n;i++){
		cin>>x;
		s.insert(x);
	}
	for(int i=0;i<q;i++){
		int inx ;cin>>inx;
		if(inx>0)
		s.insert(inx);
		else
		{
			auto itr=s.begin();
			inx=-inx;
			if(inx==1)
			s.erase(itr);
			else{
			while(inx--)itr++;
			s.erase(itr);
			}
		}
	}
	if(s.empty())
	cout<<-1<<"\n";
	else
	cout<<*s.begin()<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


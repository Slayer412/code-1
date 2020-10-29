#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
multimap< pair<int,int> ,int> mpx,mpy;
vector< pair<int,int> > a;
int n,m;
void solve()
{
	
	cin>>n>>m;
	
	f(i,0,n-1){
		int x,y;cin>>x>>y;
		a.push_back({x,y});
	}

	sort(a.begin(),a.end());
	int last_max=0;

	for(int i=0;i<n;i++){
		if(a[i].F <= last_max){
			last_max=max(a[i].S,last_max);
		}
	}
	if(last_max>=m)
	cout<<"YES\n";
	else
	cout<<"NO\n";
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}
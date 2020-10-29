#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{	int n;
	cin>>n;
	set<int> s;
	f(i,0,n-1){
		int x;cin>>x;
		s.insert(x);
	}
	if(s.size()==1){
		cout<<n<<'\n';
	}
	else{
		cout<<1<<'\n';
	}
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}
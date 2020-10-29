#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	std::vector<int> a(n);
	list <int> l;
	f(i,0,n-1)cin>>a[i];
	sort(a.rbegin(),a.rend());
	l.push_back(a[0]);
	for(int i=1;i<n-1;i+2){
		l.push_front(a[i]);
		l.push_back(a[i+1]);
	}
	for(int x:l)cout<<x<<" ";
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}
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
	int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
	if(x1==x2){
		cout<<abs(y2-y1)<<'\n';
		return;
	}
	if(y1==y2){
		cout<<abs(x2-x1)<<'\n';
		return;
	}
	else{
		cout<<abs(x2-x1)+2+abs(y2-y1)<<'\n';
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}
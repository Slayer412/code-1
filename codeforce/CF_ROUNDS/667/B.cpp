#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll a,b,x,y,n;cin>>a>>b>>x>>y>>n;
	if(n>(a+b)){
			cout<<x*y<<'\n';
			return;
	}
	ll a1=a,b1=b,x1=x,y1=y,n1=n;
	while(n1){
		if(a1<b1 && a1!=x1){
			ll t=min(a1-x1,n1);
			a1-=t;
			n1-=t;
		}
		else if(b1!=y1){
			ll t=min(b1-y1,n1);
			b1-=t;
			n1-=t;
		}
		else if(b1==y1 && a1!=x1){
			ll t=min(a1-x1,n1);
			a1-=t;
			n1-=t;
		}
		else if(b1!=y1 && a1==x1){
			ll t=min(a1-x1,n1);
			a1-=t;
			n1-=t;
		}
		if(a1==x1 && b1==y1)break;
	}
	ll ans=a1*b1;
	while(n){
		if(a-x > b-y){
			ll t=min(a-x,n);
			a-=t;
			n-=t;
		}
		else{
			ll t=min(b-y,n);
			b-=t;
			n-=t;

		}
		if(!n)break;
		if(a==x && b==y)break;

	}
	 ans=min(ans,(a*b));
	cout<<ans<<'\n';

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}
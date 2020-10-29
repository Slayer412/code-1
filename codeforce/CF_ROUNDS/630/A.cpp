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
{
	ll l,r,dow,up;
	cin>>l>>r>>dow>>up;
	ll u,v,x1,y1,x2,y2;
	cin>>u>>v>>x1>>y1>>x2>>y2;
	ll ru=0,lu=0;
	if(r>l)
	ru=r-l;
	else
	lu==l-r;
	if(ru){
		ll da=0,ua=0;
		if(dow>up){
			da=dow-up;
		}
		else 
		ua=up-dow;
		if(dow==up){
			if(dow>0)
			ua=1;
		}
		
		if(da){
			if(ru<=x2-u && da<=v-y1)
			cout<<"Yes\n";
			else
			cout<<"No\n";	
		}
		else if(ru<=x2-u && ua<=y2-v )
		cout<<"Yes\n";
		else
		cout<<"No\n";
		
	}
	else{
		if(l==r){
			if(l!=0)
			lu=1;
		}
		ll da=0,ua=0;
		if(dow>up){
			da=dow-up;
		}
		else 
		ua=up-dow;
		if(dow==up){
			if(dow>0)
			ua=1;
		}
		if(da){
			if(lu<=u-x1 && da<=v-y1)
			cout<<"Yes\n";
			else
			cout<<"No\n";	
		}
		else if(lu<=u-x1 && ua<=y2-v )
		cout<<"Yes\n";
		else
		cout<<"No\n";
	}
	


}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}
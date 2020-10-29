#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;i++)
#define F first
#define S second
using namespace std;
void solve()
{
	int n;cin>>n;
	vll a(n),b(n);
	map<ll,ll> mpa,mpb;
	ll mini=1e10+1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		mpa[a[i]]++;
		mini=min(mini,a[i]);
	}
	f(i,0,n-1){
		cin>>b[i];
		mpb[b[i]]++;
		mini=min(mini,b[i]);
	}
	map<ll,int> vis;
	multiset<ll>  S;
	for(auto it:mpa){
		if(it.second == mpb[it.first]){
		continue;
		}
		else if(it.second > mpb[it.first] || !mpb[it.first]){
			ll t=(it.second+mpb[it.F]);
			if(t%2){
				cout<<-1<<'\n';
				return;
			}
			ll r=t/2;
		
			r=r-mpb[it.first];
			while(r--)
			S.insert(it.first);
		}
		else{
			ll t=it.second+mpb[it.first];
			if(t%2){
				cout<<-1<<'\n';
				return;
			}
			ll r=t/2;
		
			r=r-it.second;
			while(r--)
			S.insert(it.first);
		}
		vis[it.F]=1;
	
	}
	for(auto it:mpb){
		if(vis[it.F])continue;
		if(it.second == mpa[it.first]){
		continue;
		}
		else if(it.second > mpa[it.first] || !mpa[it.first]){
			ll t=(it.second+mpa[it.F]);
			if(t%2){
				cout<<-1<<'\n';
				return;
			}
			ll r=t/2;
		
			r=r-mpa[it.first];

			while(r--)
			S.insert(it.first);
		}
		else{
			ll t=it.second+mpa[it.first];
			if(t%2){
				cout<<-1<<'\n';
				return;
			}
			ll r=t/2;
			
			r=r-it.second;
			while(r--)
			S.insert(it.first);
		}
	}
	int siz=S.size();
	ll m=mini*2;
	ll ans=0;
	for(auto it:S){
		if(siz){
			if(m<it)
			ans+=m;
			else
			ans+=it;
			--siz;
		}
		else
		break;
	}
	cout<<ans<<'\n';
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

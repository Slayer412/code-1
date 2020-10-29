#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define F first
#define S second
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,magic;cin>>n>>magic;
	vi a(n),b(n);
	ll total=0;
	f(i,0,n-1)cin>>a[i],total+=a[i];
	
	vector<int> cookies;
	vector< pair<int,int> > v;
	;
	f(i,0,n-1){
		cin>>b[i];
		cookies.pb(b[i]/a[i]);
		v.push_back({b[i]/a[i],a[i]-b[i]%a[i]});
	}
	sort(v.begin(),v.end());
	//for(auto it:v)cout<<it.F<<" "<<it.S<<'\n';
	for(auto &it:v){
		if(magic>=it.second){	
			++it.F;
			magic-=it.S;
			it.S=0;
		}
		else
		break;
	}
	sort(v.begin(),v.end());
	for(auto it:v)cout<<it.F<<" "<<it.S<<'\n';
	auto it=v.begin();
	ll ans=(ll)it->F;
	cout<<magic<<'\n';
	
	cout<<ans<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}
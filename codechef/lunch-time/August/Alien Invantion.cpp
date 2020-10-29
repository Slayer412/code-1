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
int n;
double d;
vector< long double > a;
bool ispossible(long double time){
	double curr_time=(a[0]*1.000000);
	for(int i=1;i<n;i++){
		if(curr_time + time > (a[i]+d))return false;
		curr_time=max((curr_time+time)*1.000000,(a[i])*1.000000);
	}
	return true;
}
ll find(ll x){
	ll low=0,hi=x;
	
	ll ans=0;
	while(hi>=low){
		ll mid=(low+hi)/2;
		if(ispossible((double)mid)){
			ans=mid;
			low=mid+1;
		}
		else
			hi=mid-1;
	}
	return ans;
}
void solve()
{
	cin>>n>>d;
	a.resize(n);
	f(i,0,n-1)cin>>a[i];
	sort(a.begin(),a.end());
	long double ans=find(1e12);
	if(ispossible(ans+1))
		ans=ans+1.000000;
	long double increment=0.1000000000;
	ans=ans*1.0000000;
	f(i,0,7){
		while(ispossible((double)(ans+increment))){
			ans+=increment;
		}
		ans=ans-increment;
		increment=(double)increment/10.0000000;
	}
	cout<<setprecision(12)<< fixed << ans<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}
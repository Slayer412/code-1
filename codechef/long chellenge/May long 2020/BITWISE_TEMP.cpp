#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
int msb(int n){
	int cnt=0;
	while(n){
		n=n>>1;
		cnt++;
	}
	return cnt;
}
using namespace std;
void solve()
{
	ll x,y,l,r;cin>>x>>y>>l>>r;
	ll mx=-1;
	ll ans;
	//cout<<bitset<62>(r)<<"\n"<<bitset<62>((x|y))<<endl;
	if(x==0 || y==0)
	cout<<0<<'\n';
	else if((x|y)<=r)
	cout<<(x|y)<<'\n';
	else
	{
		ll ans=(x|y);
		bitset<62>bit(r);
		bitset<62>b(ans);
		int i=log2(r)+1;
		for(i;i>=0;i--){
			if(1<<i & ans)
			ans-=(1<<i);
			if(ans<=r)
			break;
		}
		cout<<ans<<"\n";
		
	}
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


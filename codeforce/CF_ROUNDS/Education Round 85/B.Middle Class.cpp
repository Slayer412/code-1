#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>

using namespace std;
void solve()
{
	int n;cin>>n;
	ll x;cin>>x;
	vi v(n);
	ll sum=0;
	for(int i=0;i<n;i++){
		cin>>v[i];
		sum+=v[i];
	}
	sort(v.begin(),v.end());
	int l=0,r=n-1;
	ll ans=0;
	while(l<=r){
		if(sum/(r-l+1)>=x){
		ans=max(ans,(ll)r-l+1);	
		//cout<<ans<<'\n';
		}
		else
		sum-=v[l];
		++l;
	}
	cout<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>

using namespace std;
void solve()
{
	ll Y;cin>>Y;
	ll ans=0;
	ll i=1;
	if(Y>700){
		ans=(int)sqrt(Y-700);
		i=(int)sqrt(Y-700)+1;
		ans*=700;
		while(Y-i*i>0)
		ans+=Y-i*i,i++;
	}
	else{
		while(Y-i*i>0)
		ans+=Y-i*i,i++;
	}
	
	cout<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


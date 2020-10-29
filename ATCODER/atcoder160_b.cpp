#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll x;cin>>x;
	ll ans=0;
	if(x>=500)
		ans+=(1000)*(x/500);
	x-=(x/500)*500;
	if(x>5)
	{
		ans+=(5)*(x/5);
	}
	cout<<ans;

}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}


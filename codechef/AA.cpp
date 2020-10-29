#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
//#define for(i,a,b) for(int i=(int)a;i<=(int)b;i++
using namespace std;
void solve()
{
	ll a,b,c,k;
	cin>>a>>b>>c>>k;
	if(a>=k)
	cout<<a<<'\n';
	else
	{
		if(a+b>=k)
		cout<<a<<'\n';
		else
		{
			ll ans=a-(k-(a+b));
			cout<<ans<<'\n';
		}
	}
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}


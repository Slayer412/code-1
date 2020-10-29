#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll a,b;
	cin>>a>>b;
	int len=max(64 - __builtin_clzll(b) , 64-__builtin_clzll(a) );//clzll gives numbers of leading zeroes
	ll ans=0;
	int indx=0;
	for(int i=0;i<len;i++)
	{
		int x=a^b;
		if(x>ans)
		{
			ans=x;
			indx=i;
		}
		b= (b>>1)|((b%2)<<(len-1));
	}
	cout<<indx<<" "<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


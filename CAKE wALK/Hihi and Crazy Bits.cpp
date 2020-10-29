#include<iostream>
#include<math.h>
#include<bitset>
#include<vector>
using namespace std;
#define ll long long

void solve()
{
	ll n;cin>>n;
	vector <int >bit;
	while(n)
	{
		bit.push_back(n%2);
		n/=2;
	}
	bit.push_back(0);
	for(int i=0;i<bit.size();++i)
	{
		if(!bit[i])
		{
			bit[i]=1;
			break;
		}
	}
	ll ans=0;
	for(int i=0;i<bit.size();++i)
	{
		if(bit[i])
		ans+=1ll<<i;
	}
	cout<<ans<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


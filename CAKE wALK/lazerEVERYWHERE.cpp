#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define ll long long

void solve()
{
	int n,q;
	cin>>n>>q;
	ll arr[n+1];
	arr[0]=0;
	for(int i=1;i<=n;i++)
	cin>>arr[i];
	while(q--)
	{
		int x1,x2,cnt=0;
		ll y;
		cin>>x1>>x2>>y;
		for(int i=x1+1;i<=x2;i++)
		{
			if(arr[i]<=y || arr[i-1]<=y)
			cnt++;
		}
		cout<<cnt<<"\n";
	}
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


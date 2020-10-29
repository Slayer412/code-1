#include<bits/stdc++.h>
#define ll long long
const double PI= 3.141592653589793238;
using namespace std;
const int mxn=2*100005;
const ll mod=1e9+7;
void solve()
{	
	
	ll n,k;cin>>n>>k;
	ll sum=0;
	for(int i=k;i<=n+1;i++)
	{
		sum+=+(n-i+1)*i+1;
		sum=sum%1000000007;
	}
	cout<<sum<<endl;
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}


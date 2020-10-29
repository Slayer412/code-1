#include<iostream>
using namespace std;
#define ll long long

void solve()
{
	int n,k,v,sum=0,ans=0;
	cin>>n>>k>>v;
	int x;
	for(int i=0;i<n;i++)
	cin>>x,sum+=x;
	ans=(v*(n+k)-sum)/k;
	if(ans>0 && ans*k==(v*(n+k)-sum))
	cout<<ans<<endl;
	else
	cout<<-1<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


#include<iostream>
using namespace std;
#define ll long long

void solve()
{
	int n,cnt=0;cin>>n;
	for(int i=1;i<n;i++)
	{
		for(int j=i+1;j<=n;++j)
		if((i^j)<(n+1))
		cnt++;
	}
	cout<<cnt<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


#include<iostream>
using namespace std;
#define ll long long

void solve()
{
		ll n;cin>>n;
		ll sum=1;
		if(n==1)
		cout<<0<<endl;
		else
		{
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				if(i==n/i)
				sum+=i;
				else
				sum+=i+(n/i);
			}
		}
		cout<<sum<<endl;
		}
}
int main()
{
		int t;cin>>t;
		while(t--)
		solve();
}


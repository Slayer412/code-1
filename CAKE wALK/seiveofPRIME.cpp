#include<iostream>
#include<vector>
using namespace std;
#define ll long long

void solve()
{	int n;cin>>n;
	vector < ll > prime(n,1);
	for(int i=2;i<=n;i++)
	{
		if(prime[i])
		{
			for(int j=i*i;j<=n;j+=i)
			prime[j]=0;
		}
		
	}
	for(int i=2;i<=n;i++)
	if(prime[i])cout<<i<<" ";
	
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}


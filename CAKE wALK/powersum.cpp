#include<iostream>
#include<math.h>
using namespace std;
#define ll long long
void solve()
{
	ll x;
	cin>>x;
	int i=0,sum=0;
	int bits[31]={0};
	do
	{	bits[i]=x%2;
		x/=2;
		i++;
	}while(x!=0);
	for(int j=i;j>=0;j--)
	{
		if(bits[j]==1)
		sum+=j ;
	}
	cout<<sum<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


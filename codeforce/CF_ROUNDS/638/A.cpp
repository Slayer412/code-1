#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>

using namespace std;
void solve()
{
	int n;cin>>n;
	ll a=0,b=0;
	int i,j;
	if(n==2)
	cout<<2<<endl;
	else
	{	a=((ll)1<<n);
		for(int i=1;i<n/2;i++)
		a+=(ll)1<<i;
	b=(1<<(n))-(1<<(n/2));
	
//	cout<<a<<" "<<b<<endl;
	cout<<abs(a-b)<<endl;
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


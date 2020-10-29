#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isprime(int x)
{
	for(int j=2;j*j<=x;++j)
	{
		if(x%j==0 || x%(x/j)==0)
		return false;
	}
	return true;
}
void solve()
{
	int x;cin>>x;
	for(int j=x;;j++)
	{
		if(isprime(j)){
		cout<<j;
		break;
		}
	}
}
int main()
{
	//int t;cin>>t;
//	while(t--)
	solve();
}


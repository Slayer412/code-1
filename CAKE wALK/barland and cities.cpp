#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll a,b;
	cin>>a>>b;
	if(a<b)
	{
		if((b-a)==2 || (a%2 && b%2==0 && (b-a==1)))
		cout<<"YES\n";
		else
		cout<<"NO\n";
		
	}
	else
	{
		if( (a%2==0 && b%2 && (a-b)==1) || (a-b==2))
		cout<<"YES\n";
		else
		cout<<"NO\n"; 
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


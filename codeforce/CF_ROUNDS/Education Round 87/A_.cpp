#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	ll ans=0;
	if(b>=a)
	cout<<b<<'\n';
	else if(c-d<=0){
		cout<<-1<<'\n';
	}
	else
	{		
			ans=0;	
			ll temp=a-b;
			if(temp%(c-d)==0)
			ans+=temp/(c-d);
			else
			ans+=temp/(c-d)+1;
			ans*=c;
		cout<<ans+b<<'\n';
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


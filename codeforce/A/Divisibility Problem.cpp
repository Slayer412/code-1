#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll a,b;
	cin>>a>>b;
	if(a%b==0)
	cout<<"0\n";
	else if(a<b)
	cout<<b-a<<endl;
	else
	{
		ll d=a/b+1;
		cout<<d*b-a<<'\n';
			
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}


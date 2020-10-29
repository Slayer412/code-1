#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	ll a,b;cin>>a>>b;
	ll d=abs(b-a);
	if(d==0){
		cout<<0<<'\n';
		return;
	}
	ll sum;
	int x=1;
	while(1){
		sum=(x*1LL*(x+1))/2;
		if(sum<d){
			x++;
			continue;
		}
		if(sum%2==d%2)
		break;
		x++;
	}
	cout<<x<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}
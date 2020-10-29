#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll a,b;
	cin>>a>>b;
	if(a>b)swap(a,b);
	if(a==0 && b==0){
		cout<<"YES\n";
		return;
	}
	if(a==0 || b==0){
		cout<<"NO\n";
		return;
	}
	if(a*2==b){
		cout<<"YES\n";
		return;
	}
	ll diff=a-(b-a);
	if(diff%3==0 && diff>0)cout<<"YES\n";
	else
	cout<<"NO\n";
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}
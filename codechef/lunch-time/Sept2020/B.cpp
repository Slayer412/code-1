#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	int f=1;

	f(i,1,n){
		int x;
		cin>>x;
		if(i%x)f=0;
	}
	if(f)cout<<"YES\n";
	else
		cout<<"NO\n";

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}
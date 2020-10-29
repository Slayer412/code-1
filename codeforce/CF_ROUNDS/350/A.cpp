#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	int weeks=n/7;
	int days=n%7;
	ll ans=(ll)weeks*(ll)2;
	if(days!=0){
		if(days==1)
		ans+=1;
		else
		ans+=2;
	}
	ll minans=(ll)weeks*2LL;
	if(days==6)
	++minans;
	cout<<minans<<" "<<ans<<'\n';
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}
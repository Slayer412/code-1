#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n;cin>>n;
	vector<ll> divs;
	for(ll i=1;i*i<= n ;++i){
		if(n%i==0){
			if((n/i)!=i)
				divs.push_back(n/i),divs.push_back(i);
			else
				divs.push_back(i);
		}
	}
	for(auto it:divs)cout<<it<<" ";
		cout<<'\n';
	sort(divs.rbegin(),divs.rend());
	for(int i=0;i<divs.size();++i){
		ll d=divs[i];
		int ok=1;
		for(ll j=2LL;j*j<=divs[i];++j){
			if(d%(j*j)==0){
				ok=0;
				break;
			}
		}
		if(ok){
			cout<<d;
			return;
		}
	}
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}
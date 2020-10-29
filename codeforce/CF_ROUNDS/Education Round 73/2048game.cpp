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
	ll x;
	multiset<ll> s;
	int f=0;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x<=2048)
		s.insert(x);
	}
	if(s.size()==0){
		cout<<"NO\n";
		return;
	}
	if(s.count(2048)>=1){
		cout<<"YES\n";
		return;
	}
	for(auto i=s.begin();i!=s.end();){
		auto it=i;++it;
		if(it==s.end())
		break;
		if(*i==*it){
			s.erase(i);
			s.erase(it);
			s.insert(2*(*i));
			i=s.begin();
		}
		else
		++i;
		if(s.count(2048)>=1)break;
		//for(ll x:s)cout<<x<<'\n';
	}
	//cout<<s.count(2048)<<'\n';
	if(s.count(2048)>=1){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	
	
}	
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}
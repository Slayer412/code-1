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
	map<ll,int> lang;
	
	f(i,0,n-1){
		ll x;cin>>x;
		lang[x]++;
	}
	int m;cin>>m;
	ll max=-1,movie=0;
	set< int> same;
	map< pair<ll,int> ,ll > audio,subtitle;
	f(i,0,m-1){
		ll x;cin>>x;
		audio[{x,i+1}]=lang[x];
		if(lang[x]>max){
			max=lang[x];
			movie=i+1;
		}
	}
	for(auto it:audio){
		if(max==it.second){
			same.insert(it.first.second);
		}
	}
	ll submax=0,mx=max;
	f(i,0,m-1){
		ll x;cin>>x;
		if(same.count(i+1)){
			if(lang[x]>submax){
				submax=lang[x];
				movie=i+1;
			}
		}
	}
	cout<<movie<<'\n';
	
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}
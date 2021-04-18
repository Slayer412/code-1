#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,k;cin>>n>>k;
	vi a(n);
	int mx=-1;
	int cnt=0,prev=-1,z=0;
	map<int,int> mp;
	f(i,0,n-1){
		cin>>a[i];
		mp[a[i]]++;
		if(a[i]==0)++z;
	}
	// cout<<"MP "<<mp.size()<<'\n';
	if(k<z){

		cout<<-1<<'\n';return;
	}
	if((int)mp.size()==1){
		cout<<1<<'\n';
		return;
	}
	if(mp.size()<=k){
		cout<<1<<'\n';
	}
	else
		cout<<2<<'\n';
	// vector< pair<int,int> > p(mp.begin(),mp.end());
	// for(int i=0;i<mp.size();++i){
	// 	int temp=p[i].F;
	// 	p[i].F=p[i].S;
	// 	p[i].S=temp;
	// }
	// sort(p.rbegin(),p.rend());
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}
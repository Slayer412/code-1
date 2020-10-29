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
	int n;cin>>n;
	vi a(n);
	map<ll,vector<int> > mp;
	f(i,0,n-1)cin>>a[i],mp[a[i]].push_back(i+1);
	if(mp.size()==1){
		cout<<"NO\n";
		return;
	}
	vector<  pair<int,int> > ans;
	auto it=(mp.begin()->F);
	int root=*mp[it].begin();
	//cout<<it<<" "<<root<<"\n";
	auto iit=mp.begin();
	++iit;
	int second_neede=-1;
	int vis[n+1]={0};
	while(iit!=mp.end()){
		for(auto i:mp[iit->F]){
			ans.push_back({root,i});
			if(second_neede==-1)
				second_neede=i;
		}
		++iit;
	}
	for(auto t:mp[mp.begin()->first]){
		if(t==root){
			continue;
		}
		else
			ans.push_back({second_neede,t});
	}
	cout<<"YES\n";
	for(auto it:ans)cout<<it.F<<" "<<it.S<<"\n";


}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}
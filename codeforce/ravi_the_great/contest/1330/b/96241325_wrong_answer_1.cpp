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
	vi a(n+1);
	f(i,1,n)cin>>a[i];
	vector< int > vis(n+1,0);
	int mini=1e8,mx=-1;
	int f=1;
	pair<int,int>   ans={0,0};
	int cnt=1;
	f(i,1,n){
		if(!vis[a[i]]){
			vis[a[i]]=1;
			mini=min(mini,a[i]);
			mx=max(mx,a[i]);
		}
		else
			f=0;
		if(f==0){
			cout<<0<<'\n';
			return;
		}
		if(mini==1 && mx==i && f && cnt==1){
			ans={i,0};
			mini=INT_MAX,mx=-1;
			f(i,0,n)vis[i]=0;
			++cnt;
		}
		else if(mini==1 && mx==n-ans.F && f && cnt==2){
			ans.S=n-ans.F;
		}
		else if(i==n && (mini!=1 || mx!=n-ans.F)){
			cout<<0<<"\n";
			return;
		}
	}
	set<int> s;
	f(i,1,ans.S){
		s.insert(a[i]);
	}
	if(s.size()==ans.S){
		auto it=s.end();
		--it;
		if(*it==ans.S){
			s.clear();
			f(i,ans.S+1,n){
				s.insert(a[i]);
			}
			it=s.end();
			--it;
			if(s.size()==ans.F && *it==ans.F){
				cout<<2<<"\n";
				cout<<ans.F<<" "<<ans.S<<'\n';
				cout<<ans.S<<" "<<ans.F<<'\n';
				return;
			}
			else{
				cout<<1<<'\n';
				cout<<ans.F<<" "<<ans.S<<'\n';
				return;
			}
		}
	}
	cout<<1<<"\n";
	cout<<ans.F<<" "<<ans.S<<"\n";

	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}
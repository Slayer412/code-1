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
	f(i,0,n-1)cin>>a[i];
	vi ones;
	vi others;
	int ind=n;
	vector< pair<int,int> > ans;
	vi pos(n);
	for(int i=n-1;i>=0;--i){
		int which=-1;
		if(a[i]==2){
			if(!ones.empty()){
				which=ones.back();
				ones.pop_back();
			}
			else{
				cout<<-1<<'\n';
				return;
			}
		}
		else if(a[i]==3){
			if(!others.empty()){
				which=others.back();
				others.pop_back();
			}
			else{
				if(!ones.empty()){
					which=ones.back();
					ones.pop_back();
				}
				else{
					cout<<-1<<'\n';
					return;
				}
			}
		}
		if(a[i]==1){
			ones.pb(i);
		}
		else if(a[i]>=2){
			others.pb(i);
		}
		if(a[i]==1){
			pos[i]=ind--;
			ans.push_back({pos[i],i+1});
		}
		else if(a[i]==2){
			pos[i]=pos[which];
			ans.push_back({pos[i],i+1});
		}
		else if(a[i]==3){
			pos[i]=ind--;
			ans.push_back({pos[i],which+1});
			ans.push_back({pos[i],i+1});
		}
	}
	cout<<ans.size()<<"\n";
	for(auto it:ans){
		cout<<it.F<<" "<<it.S<<"\n";
	}
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}
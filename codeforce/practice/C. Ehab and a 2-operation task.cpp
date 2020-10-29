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
	vll a(n+1),sorted(n+1);
	vector< pair<int,pair<int,int> > > ans;
	f(i,1,n){
		cin>>a[i];
		a[i]=a[i]+(2*n+1);
	}
	ans.push_back({1,{n,2*n+1}});
		f(i,1,n){
			if((a[i])!=i){
				ans.push_back({2,{i,a[i]-i}});
			}
		}
		if(ans.size()==0){
			cout<<0<<'\n';
			return;
		}
	cout<<ans.size()<<'\n';
		for(auto i:ans)
			cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<'\n';
		
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}
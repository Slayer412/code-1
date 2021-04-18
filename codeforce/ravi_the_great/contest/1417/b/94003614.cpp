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
	ll n,T;cin>>n>>T;
	vll a(n+1);
	a[0]=INT_MAX;
	map<ll,int> mp;
	map<ll,set<int> > ind;
	f(i,1,n)cin>>a[i],mp[a[i]]++,ind[a[i]].insert(i);
	vi ans(n+1);
	map<ll,int> mpa,mpb;
	//sort(a.rbegin(),a.rend());
	for(int i=1;i<=n;i++){
		if(mpa[T-a[i]] && mpb[T-a[i]]){
			// cout<<i<<" " <<1<<"\n";
			if(mpa[a[i]]+mpa[T-a[i]] < mpb[a[i]] + mpb[T-a[i]]){
				mpa[a[i]]++;
				ans[i]=1;

			}
			else{
				ans[i]=0;
				mpb[a[i]]++;
			}
		}
		else if(mpa[T-a[i]]){
			// cout<<2<<" " <<a[i]<<"\n";
			ans[i]=0;
			mpb[a[i]]++;

		}
		else {
			// cout<<i<<" " <<3<<"\n";
			ans[i]=1,mpa[a[i]]++;
		}

	}
	f(i,1,n)cout<<ans[i]<<" ";
	cout<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}
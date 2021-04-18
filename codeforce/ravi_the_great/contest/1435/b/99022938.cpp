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
	int n,m;cin>>n>>m;
	vector<vector<int> > rows;
	vector<vector<int> > cols;
	f(i,0,n-1){
		vi a(m);
		f(j,0,m-1){
			cin>>a[j];
		}
		rows.pb(a);
	}
	f(i,0,m-1){
		vi a(n);
		f(j,0,n-1){
			cin>>a[j];
		}
		cols.pb(a);
	}
	std::vector<std::vector<int> > ans(n);
	for(int i=0;i<n;i++){
		int find=rows[i][0];
		f(j,0,m-1){
			int f=0;
			f(k,0,n-1){
				if(cols[j][k]==find && ans[k].empty()){
					ans[k]=rows[i];
					f=1;
					break;
				}
			}
			if(f)break;
			
		}
	}
	f(i,0,n-1){
		for(auto it:ans[i])cout<<it<<" ";
		cout<<'\n';
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}
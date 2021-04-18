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
#define sz(v) (int)v.size()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;


void solve()
{
		int n,k;cin>>n>>k;
		vi a(n);
		f(i,0,n-1)cin>>a[i];
		int ans=INT_MAX;
		for(int target=1;target<=100;++target){
			int i=0,cnt=0;
			while(i<n && a[i]==target)++i;
				while(i<n){
					int j=i;
					int f=0;
					while(j<n && j-i+1<=k){
						if(a[j]!=target)f=1;
						++j;
					}
					
					cnt+=f;
					while(j<n && a[j]==target)++j;
					i=j;
				}
			ans=min(ans,cnt);
		}
		cout<<ans<<endl;
		
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}
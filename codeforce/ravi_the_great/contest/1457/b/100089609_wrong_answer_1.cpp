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
		map<int,int> mp;
		f(i,0,n-1)cin>>a[i],mp[a[i]]++;
		int mx=0;
		int target;
		f(i,0,n-1){
			if(mx<mp[a[i]]){
				mx=mp[a[i]];
				target=a[i];	
			}
		}
		int i=0;
		int cnt=0;
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
		cout<<cnt<<endl;
		
		
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}
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
int gcd(int a,int b){
	if(a==0)return b;
	return gcd(b%a,a);
}
void solve()
{
	int n;cin>>n;
	int mini=1e9+5;
	map<int,set<int> > mp;
	vi a(n),sorted(n);f(i,0,n-1)cin>>a[i],sorted[i]=a[i],mini=min(mini,a[i]),mp[a[i]].insert(i);
	sort(sorted.begin(),sorted.end());
	f(i,0,n-1){
		if(a[i]==sorted[i])continue;
		else{
				if(a[i]%mini!=0){
					cout<<"NO\n";
					return;
				}		
		}
	}
	cout<<"YES\n";

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}
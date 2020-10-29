#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	vi a(n);
	map<int,int> mp;
	int n2=0,n4=0,n6=0,n8=0;
	f(i,0,n-1){
		cin>>a[i];
		mp[a[i]]++;
		if(mp[a[i]]==2)
		++n2;
		if(mp[a[i]]==4)
		++n4;
		if(mp[a[i]]==6)
		++n6;
		if(mp[a[i]]==8)
		++n8;
	}
	int q;cin>>q;
	while(q--){
		char type;cin>>type;
		int x;cin>>x;
		
		if(type=='+'){
			mp[x]++;
			if(mp[x]==2)++n2;
			if(mp[x]==4)++n4;
			if(mp[x]==6)++n6;
			if(mp[x]==8)++n8;
		}
		else{
			if(mp[x]==2)--n2;
			if(mp[x]==4)--n4;
			if(mp[x]==6)--n6;
			if(mp[x]==8)--n8;
			mp[x]--;
		}
		
		if(n8 || (n6 && n2>1) || (n4>=1 && n2>2) || n4>1)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}
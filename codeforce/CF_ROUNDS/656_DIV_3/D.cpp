#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
char s[131075];
int getcost(int l,int r,char ch){
	int cost=0;
	for(int i=l;i<=r;++i){
		if(s[i]!=ch){
			++cost;
		}
	}
	return cost;
}
ll go(int l,int r,char ch){
	if(l==r){
		if(s[l]==ch)
		return 0;
		return 1;
	}
	int mid=(l+r)/2;
	return min(getcost(l,mid,ch) + go(mid+1,r,ch+1),getcost(mid+1,r,ch)+go(l,mid,ch+1));
}
void solve()
{
	int n;cin>>n;
	s[0]='1';
	for(int i=1;i<=n;i++)cin>>s[i];
	cout<<go(1,n,'a')<<'\n';
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}
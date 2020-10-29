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
	string s;cin>>s;
	int len=s.size();
	int ans=0;
	for(int L=0;L<len;++L){
		for(int i=0;i+L-1<len;++i){
			for(int j=i+1;j+L-1<len;++j){
				if(s.substr(i,L)==s.substr(j,L))ans=L;
			}
		}
	}
	cout<<ans<<"\n";
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(tU-)
	solve();
}
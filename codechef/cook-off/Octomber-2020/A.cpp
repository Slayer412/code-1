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
	string s;
	cin>>s;
	char x=s[n-1];
	fr(i,n-2,0){
		if(s[i]==x){
			cout<<"YES\n";
			return;
		}
	}
	cout<<"NO\n";
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}